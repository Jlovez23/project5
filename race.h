#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class race{
	private:
		const static int NUM_HORSES = 5;
		const int TRACK_LENGTH = 15;
	public:
		horse horses[NUM_HORSES];
		race();
		void start();
}; //end race def

#endif
