# TF02_lidar
Controlling the Benewake TF02 lidar using Uart with Arduino and Python for raspberry Pi



Used a serial rate of 125000

#How to connect the lidar:
* Disconnect the 1mm JST 4 pin male header
* connect wires to the lidar pins
* then connect to the rpi or arduino board
* I connected the TX (green wire) to the RX pin either on Pi or Arduino
* 5V (red wire) to the 5v connection and ground wire to GND connection
* do not have to connect receiver pin / RX / white wire from the lidar as its not being written to, only read from to the pi/Arduino

#Tutorials
Arduino: 
* Used this for the arduino code: https://innovatorsguru.com/tf02-lidar/
* can change serial speed on the platform.ini file

Python/Raspberry Pi
* https://www.instructables.com/Benewake-LiDAR-TFmini-Complete-Guide/
* teachmemicro for the Serial.serial code
* see benewake's TFMini repo for the rest of the code
