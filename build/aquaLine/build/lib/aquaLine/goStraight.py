#!/usr/bin/env python3
import rclpy
import sys

from aqua2_interfaces.msg import AutopilotCommand
from nav_msgs.msg import Odometry


def driveStraight(node):
    '''
    This is just a test method to make the aqua2 robot go straight in the 
    '''
    publisher = node.create_publisher(AutopilotCommand, "/aqua/autopilot/command", 10)
    auto_msg = AutopilotCommand()

    def callback(msg):
        nonlocal publisher, auto_msg

        auto_msg.surge = 0.3
        auto_msg.target_pitch = -0.3

        publisher.publish(auto_msg)

        #Need to replace the subscription for the pose/ there might be an actual bot replacement
        subscriber = node.create_subscription(Odometry, "/aqua/simulator/pose", callback, 10)

        
        rclpy.spin(node)




def main(args=None):
    rclpy.init()
    node = rclpy.create_node("goStraight")

    driveStraight(node)

    #rclpy.shutdown()



if __name__ == '__main__':
    main()