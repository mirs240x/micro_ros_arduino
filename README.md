# micro-ROS Arduino library for mirs240x
mirs is a project conducted by NIT(KOSEN) NUMAZU College. For more information, please see [here](https://www2.denshi.numazu-ct.ac.jp/mirsdoc2/mirs17wp/).

## Install a library release by .zip download
- Go to this [link]() and download the `source code (zip)` release
- Launch your Arduino IDE, open the Sketch -> Include library -> Add .ZIP Library... menu and
select the downloaded file named `micro_ros_arduino_mirs240x-3.0.0-humble.zip` (the actual version digits may differ)

## Mod and rebuild Micro-ROS Arduino library for mirs240x
- Install Docker for your PC platform
- Install the [Micro-ROS Arduino library for mirs240x](https://github.com/mirs240x/micro_ros_arduino_mirs240x/) using the instructions above.
- run these commands to rebuild the library using the [Micro-ROS library builder](https://github.com/micro-ROS/micro_ros_arduino):
```
cd %HOMEPATH%\Documents\Arduino\libraries
git clone -b humble --depth 1 https://github.com/mirs240x/micro_ros_arduino_mirs240x.git
docker run -it --rm -v .\micro_ros_mirs24:/project --env MICROROS_LIBRARY_FOLDER=extras microros/micro_ros_static_library_builder:humble
```
- You can also rebuild the library for a particular platform only, e.g. for ESP32:
```
docker run -it --rm -v .\micro_ros_mirs24:/project --env MICROROS_LIBRARY_FOLDER=extras microros/micro_ros_static_library_builder:humble -p esp32
```