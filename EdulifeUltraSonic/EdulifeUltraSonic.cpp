/*  Edulife UltraSonic Library for ATL Robotics
 *  Created by Suman Wahengbam R&D Head of Edulife India on April 24, 2019 
 *  Released into the bublic domain for ATL Training INDIA
 *	Version 0.1
 *	EdulifeUltraSonic.cpp file
*/
#include "EdulifeUltraSonic.h"

EdulifeUltraSonic::EdulifeUltraSonic(int pinA, int pinB)
{
  pinMode(pinA,OUTPUT);
  pinMode(pinB,INPUT);
  _pinA = pinA;
  _pinB = pinB;  
}

int EdulifeUltraSonic::distanceInInches()
{
    digitalWrite(_pinA,LOW);
    delayMicroseconds(2);
    digitalWrite(_pinA,HIGH);
    delayMicroseconds(10);
    digitalWrite(_pinA,LOW);
    duration = pulseIn(_pinB,HIGH);
    distance_in_float = duration * 0.0135039443/2;
    return distance_in_float;    
}

int EdulifeUltraSonic::distanceInCM()
{
    digitalWrite(_pinA,LOW);
    delayMicroseconds(2);
    digitalWrite(_pinA,HIGH);
    delayMicroseconds(10);
    digitalWrite(_pinA,LOW);
    duration = pulseIn(_pinB,HIGH);
    distance_in_float = duration * 0.0343/2;
    return distance_in_float;    
}

int EdulifeUltraSonic::distanceInMM()
{
    digitalWrite(_pinA,LOW);
    delayMicroseconds(2);
    digitalWrite(_pinA,HIGH);
    delayMicroseconds(10);
    digitalWrite(_pinA,LOW);
    duration = pulseIn(_pinB,HIGH);
    distance_in_float = duration * 0.343/2;
    return distance_in_float;    
}

int EdulifeUltraSonic::distanceInFoot()
{
    digitalWrite(_pinA,LOW);
    delayMicroseconds(2);
    digitalWrite(_pinA,HIGH);
    delayMicroseconds(10);
    digitalWrite(_pinA,LOW);
    duration = pulseIn(_pinB,HIGH);
    distance_in_float = duration * 0.00112532812/2;
    return distance_in_float;    
}
