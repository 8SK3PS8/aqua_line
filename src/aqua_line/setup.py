from setuptools import setup

package_name = 'aqua_line'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ajbam',
    maintainer_email='ajbam@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "go_straight = aqua_line.goStraight:main",
            'stabilize = aqua_line.stabilize:main'
        ],
    },
)
