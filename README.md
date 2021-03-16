# TF02_lidar
Controlling the Benewake TF02 lidar using Uart with Arduino and Python for raspberry Pi

I connected the TX (green wire) to the RX pin either on Pi or Arduino
5V (red wire) to the 5v connection and ground wire to GND connection

Used a serial rate of 125000

How to connect the lidar:
* Disconnect the 1mm JST 4 pin male header
* connect wires to the lidar pins
* then connect to the rpi or arduino board
* do not have to connect receiver pin / RX / white wire from the lidar as its not being written to, only read from to the pi/Arduino
