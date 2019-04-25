/*  Edulife UltraSonic Library for ATL Robotics
 *  Created by Suman Wahengbam R&D Head of Edulife India on April 24, 2019 
 *  Released into the bublic domain for ATL Training INDIA
 *	Version 0.1
 *	EdulifeUltraSonic.h file
*/
#ifndef EdulifeUltraSonic_h
#define EdulifeUltraSonic_h

#include "Arduino.h"

class EdulifeUltraSonic
{
  public:
    EdulifeUltraSonic(int pinA, int pinB);
    int distanceInInches();
    int distanceInCM();
    int distanceInMM();
    int distanceInFoot();
  private:
    int _pinA;
    int _pinB;
    long duration;
    float distance_in_float;
};

#endif
