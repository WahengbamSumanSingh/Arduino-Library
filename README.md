# Arduino-Library
Arduino Sensor Library for Robotics And IOT
# Discriptions for EdulifeUltraSonic Library
> Finding distances using ultrasonic sensor using arduino for robotics
# Example For EdulifeUltraSonic
- #include<EdulifeUltraSonic.h>
- EdulifeUltraSonic MySonic(10,11); // Trig Pin And Echo Pin
- void setup() {
-   Serial.begin(9600);
- }
- void loop(){
-   int dis = MySonic.distanceInCM();
-   Serial.println(dis);
- }
# Functions for EdulifeUltraSonic
1. distanceInCM - measuring distance in cm
2. distanceInInches	 - measuring distance in Inches
3. distanceInMM - measuring distance in mm
4. distanceInFoot	 - measuring distance in foot
