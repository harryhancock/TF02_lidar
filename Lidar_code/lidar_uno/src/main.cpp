/**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** ****
* Author: Benewake
* Date: 2017-06-20
* Version: 1.0
* Description: Example code for using the RB-Ben-01 with an Arduino Mega.
* Product: RB-Ben-01: http://www.robotshop.com/en/benewake-tf01-lidar-led-rangefinder-10-m.html
* Datasheet: RB-Ben-01: http://www.robotshop.com/media/files/pdf/benewake-tf01-lidar-laser-rangefinder-10-m-Datasheel.pdf
**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** ****
*/
#include <Arduino.h>
// Constants
const int HEADER = 0x59;
// Variables
int TF01_pix;
int dist, strength;
int a, b, c, d, e, f, check, i;
void setup()
{
// Set serial interfaces
//Serial.begin(9600);
Serial.begin(115200);
}
void loop()
{
// Check if at least 9 bytes are available
if (Serial.available() >= 9)
{
// Check for first header byte
if(Serial.read() == HEADER)
{
// Check for second header byte
if(Serial.read() == HEADER)
{
// Read all 6 data bytes
a = Serial.read();
b = Serial.read();
c = Serial.read();
d = Serial.read();
e = Serial.read();
f = Serial.read();
// Read checksum byte
check = (a + b + c + d + e + f + HEADER + HEADER);
// Compare lower 8 bytes of checksum
if(Serial.read() == (check & 0xff))
{
// Calculate distance
dist = (a + (b * 256));
// Calculate signal strength
strength = (c + (d * 256));
// Display results to USB serial port
Serial.print("dist = ");
Serial.print(dist);
Serial.print('\t');
Serial.print("strength = ");
Serial.print(strength);
Serial.print('\n');
}
/*
else
{
i = i + 1;
Serial.print(“worong point”);
Serial.println(i);
}
*/
}
}
}
}