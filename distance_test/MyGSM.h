#ifndef _MYGSM_H_
#define _MYGSM_H_
#include"SoftwareSerial.h" 
#include <Wire.h>
#include<stdio.h>
class MyGSM
{
public:
    int read(int pin);
	int humidity;
	int temperature;

};
#endif