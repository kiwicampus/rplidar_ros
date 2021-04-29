from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            node_name='rplidar_composition',
            package='rplidar_ros',
            node_executable='rplidar_composition',
            output='screen',
            parameters=[{
                'serial_port': '/dev/ttyTHS0',
                'serial_baudrate': 256000,
                'frame_id': 'laser_link',
                'inverted': False,
                'angle_compensate': True,
            }],
        ),
    ])
