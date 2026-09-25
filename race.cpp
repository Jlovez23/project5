#include <iostream>
#include "race.h"

race::race(){
	const int TRACK_LENGTH = 15;
	const static int NUM_HORSES = 5;
	horses[NUM_HORSES];
	int i = 0;
	for(i=0; i< NUM_HORSES; i++){
		horses[i] = horse(i, TRACK_LENGTH);
	} //end for
} //end race


void race::start(){
	bool keepGoing = true;
	int i = 0;
	bool win = false;
	while(keepGoing){
		for(i=0;i<NUM_HORSES;i++){
			horses[i].advance();
			win = horses[i].isWinner();
			if(win == true){
				keepGoing = false;
			} //end if
			else {
				horses[i].printLane();
			}
		}//end for
		std::cout << "Press enter to continue! \n";
		std::cin.get();	
	} //end while
}


