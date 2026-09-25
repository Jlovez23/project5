#include <iostream>
#include "race.h"

race::race(){
	int TRACK_LENGTH = 15
	static int NUM_HORSES = 5
	horses = [NUM_HORSES]
	int i = 0
	for(i=0; i< NUM_HORSES; i++){
		horse(i,15);
	} //end for
} //end race


race::start(){
	bool keepGoing = true;
	int i = 0
	while(keepGoing){
		for(i=0;i<race::NUM_HORSES;i++){
			horse::advance();
			win = horse::isWinner;
			if(win == true){
				keepGoing = false;
			} //end if
			else:
				horse::printLane();
		} //end for
	} //end while
}


