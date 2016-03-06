#ifndef motor_h
#define motor_h

#include <Arduino.h>
///@brief Class for MotorClass
class MotorClass
{
	public:
		MotorClass();
		void motor_output(int output,int sens, int high_low, int speed);
		void shiftWrite(int output, int high_low);
	private:
		int level;
};

#endif