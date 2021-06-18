# **_RPLIDAR ROS package_**

---
### **Code Information**
**Integration:** _[Eng. Davidson Daniel Rojas Cediel](https://www.linkedin.com/in/dadaroce/)_ \
**Mail:** _davidson@kiwibot.com_ \
**Kiwi Campus / AI & Robotics Team**

---

<p align="center">
    <img src="https://user-images.githubusercontent.com/39452483/108378469-04f2ef00-71d3-11eb-8a37-e848525e6f34.png">
</p>

<p align="center">
    RPLidar
</p>


---

```
File Tree
📦rplidar
 ┣ 📂launch
 ┃ ┣ 📜rplidar.launch.py
 ┃ ┣ 📜rplidar_a3.launch.py
 ┃ ┣ 📜rplidar_s1.launch.py
 ┃ ┣ 📜rplidar_s1_tcp.launch.py
 ┃ ┣ 📜test_rplidar.launch.py
 ┃ ┣ 📜test_rplidar_a3.launch.py
 ┃ ┣ 📜view_rplidar.launch.py
 ┃ ┣ 📜view_rplidar_a3.launch.py
 ┃ ┣ 📜view_rplidar_s1.launch.py
 ┃ ┗ 📜view_rplidar_s1_tcp.launch.py
 ┣ 📂rviz
 ┃ ┗ 📜rplidar.rviz
 ┣ 📂scripts
 ┃ ┣ 📜create_udev_rules.sh
 ┃ ┣ 📜delete_udev_rules.sh
 ┃ ┗ 📜rplidar.rules
 ┣ 📂sdk
 ┃ ┣ 📂include
 ┃ ┃ ┣ 📜rplidar.h
 ┃ ┃ ┣ 📜rplidar_cmd.h
 ┃ ┃ ┣ 📜rplidar_driver.h
 ┃ ┃ ┣ 📜rplidar_protocol.h
 ┃ ┃ ┗ 📜rptypes.h
 ┃ ┣ 📂src
 ┃ ┃ ┣ 📂arch
 ┃ ┃ ┃ ┣ 📂linux
 ┃ ┃ ┃ ┃ ┣ 📜arch_linux.h
 ┃ ┃ ┃ ┃ ┣ 📜net_serial.cpp
 ┃ ┃ ┃ ┃ ┣ 📜net_serial.h
 ┃ ┃ ┃ ┃ ┣ 📜net_socket.cpp
 ┃ ┃ ┃ ┃ ┣ 📜thread.hpp
 ┃ ┃ ┃ ┃ ┣ 📜timer.cpp
 ┃ ┃ ┃ ┃ ┗ 📜timer.h
 ┃ ┃ ┃ ┣ 📂macOS
 ┃ ┃ ┃ ┃ ┣ 📜arch_macOS.h
 ┃ ┃ ┃ ┃ ┣ 📜net_serial.cpp
 ┃ ┃ ┃ ┃ ┣ 📜net_serial.h
 ┃ ┃ ┃ ┃ ┣ 📜net_socket.cpp
 ┃ ┃ ┃ ┃ ┣ 📜thread.hpp
 ┃ ┃ ┃ ┃ ┣ 📜timer.cpp
 ┃ ┃ ┃ ┃ ┗ 📜timer.h
 ┃ ┃ ┃ ┗ 📂win32
 ┃ ┃ ┃ ┃ ┣ 📜arch_win32.h
 ┃ ┃ ┃ ┃ ┣ 📜net_serial.cpp
 ┃ ┃ ┃ ┃ ┣ 📜net_serial.h
 ┃ ┃ ┃ ┃ ┣ 📜net_socket.cpp
 ┃ ┃ ┃ ┃ ┣ 📜timer.cpp
 ┃ ┃ ┃ ┃ ┣ 📜timer.h
 ┃ ┃ ┃ ┃ ┗ 📜winthread.hpp
 ┃ ┃ ┣ 📂hal
 ┃ ┃ ┃ ┣ 📜abs_rxtx.h
 ┃ ┃ ┃ ┣ 📜assert.h
 ┃ ┃ ┃ ┣ 📜byteops.h
 ┃ ┃ ┃ ┣ 📜event.h
 ┃ ┃ ┃ ┣ 📜locker.h
 ┃ ┃ ┃ ┣ 📜socket.h
 ┃ ┃ ┃ ┣ 📜thread.cpp
 ┃ ┃ ┃ ┣ 📜thread.h
 ┃ ┃ ┃ ┣ 📜types.h
 ┃ ┃ ┃ ┗ 📜util.h
 ┃ ┃ ┣ 📜rplidar_driver.cpp
 ┃ ┃ ┣ 📜rplidar_driver_TCP.h
 ┃ ┃ ┣ 📜rplidar_driver_impl.h
 ┃ ┃ ┣ 📜rplidar_driver_serial.h
 ┃ ┃ ┗ 📜sdkcommon.h
 ┃ ┗ 📜README.txt
 ┣ 📂src
 ┃ ┣ 📜client.cpp
 ┃ ┗ 📜node.cpp
 ┣ 📜CHANGELOG.rst
 ┣ 📜CMakeLists.txt
 ┣ 📜LICENSE
 ┣ 📜README.md
 ┣ 📜package.xml
 ┣ 📜rplidar_A1.png
 ┗ 📜rplidar_A2.png
```
---

# RPLIDAR ROS2 Package

ROS2 node for RPLIDAR

Visit following Website for more details about RPLIDAR:

rplidar roswiki: http://wiki.ros.org/rplidar

rplidar HomePage:   http://www.slamtec.com/en/Lidar

rplidar SDK: https://github.com/Slamtec/rplidar_sdk

rplidar Tutorial:  https://github.com/robopeak/rplidar_ros/wiki

## How to [install ROS2](https://index.ros.org/doc/ros2/Installation)
[ubuntu](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html)

## How to configuring your ROS 2 environment
[Configuring your ROS 2 environment](https://docs.ros.org/en/foxy/Tutorials/Configuring-ROS2-Environment.html)

## How to Create a ROS2 workspace
[Create a workspace](https://docs.ros.org/en/foxy/Tutorials/Workspace/Creating-A-Workspace.html)

## Compile & Install rplidar_ros2 package

1. Clone rplidar_ros2 package from github : 

   ```bash
   git clone -b ros2 https://github.com/slamtec/rplidar_ros.git
   ``` 

2. Build rplidar_ros2 package :

   ```bash
   cd <your_own_ros2_ws>
   colcon build --symlink-install
   ```
   if you find output like "colcon:command not found",you need separate [install colcon](https://docs.ros.org/en/foxy/Tutorials/Colcon-Tutorial.html#install-colcon) build tools. 

  
3. Package environment setup :
    ```bash
    source ./install/setup.bash
    ```

    Note: Add permanent workspace environment variables.
    It's convenientif the ROS2 environment variables are automatically added to your bash session every time a new shell is launched:
    ```bash
    $echo "source <your_own_ros2_ws>/install/setup.bash" >> ~/.bashrc
    $source ~/.bashrc
    ```

## Run rplidar_ros2

### Run rplidar node and view in the rviz

The command for RPLIDAR A1/A2 is : 

```bash
ros2 launch rplidar_ros2 view_rplidar_launch.py
```

The command for RPLIDAR A3 is : 

```bash
ros2 launch rplidar_ros2 view_rplidar_a3_launch.py
```

The command for RPLIDAR S1 is : 

```bash
ros2 launch rplidar_ros2 view_rplidar_s1_launch.py
```

The command for RPLIDAR S1(TCP connection) is : 

```bash
ros2 launch rplidar_ros2 view_rplidar_s1_tcp_launch.py
```

Notice: the different is serial_baudrate between A1/A2 and A3/S1

## RPLidar frame
RPLidar frame must be broadcasted according to picture shown in rplidar-frame.png
