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

RPLIDAR ROS package
=====================================================================

ROS node and test application for RPLIDAR

Visit following Website for more details about RPLIDAR:

rplidar roswiki: http://wiki.ros.org/rplidar

rplidar HomePage:   http://www.slamtec.com/en/Lidar

rplidar SDK: https://github.com/Slamtec/rplidar_sdk

rplidar Tutorial:  https://github.com/robopeak/rplidar_ros/wiki

How to build rplidar ros package
=====================================================================
    1) Clone this project to your catkin's workspace src folder
    2) Running catkin_make to build rplidarNode and rplidarNodeClient

How to run rplidar ros package
=====================================================================
There're two ways to run rplidar ros package

I. Run rplidar node and view in the rviz
------------------------------------------------------------
roslaunch rplidar_ros view_rplidar.launch (for RPLIDAR A1/A2)
,
roslaunch rplidar_ros view_rplidar_a3.launch (for RPLIDAR A3)
or
roslaunch rplidar_ros view_rplidar_s1.launch (for RPLIDAR S1)

You should see rplidar's scan result in the rviz.

II. Run rplidar node and view using test application
------------------------------------------------------------
roslaunch rplidar_ros rplidar.launch (for RPLIDAR A1/A2)
,
roslaunch rplidar_ros rplidar_a3.launch (for RPLIDAR A3)
or
roslaunch rplidar_ros rplidar_s1.launch (for RPLIDAR S1)

rosrun rplidar_ros rplidarNodeClient

You should see rplidar's scan result in the console

Notice: the different is serial_baudrate between A1/A2 and A3/S1

RPLidar frame
=====================================================================
RPLidar frame must be broadcasted according to picture shown in rplidar-frame.png
