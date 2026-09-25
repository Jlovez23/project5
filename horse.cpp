#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "horse.h"

horse::horse(){
	horse::position = 0;
	horse::index = 0;
	horse::trackLength = 15;
}

horse::horse(int index, int trackLength){
	horse::position = 0;
	horse::index = index;
	horse::trackLength = trackLength;
}

void horse::advance(){
	int move = 0;
	move = rand() % 2;
	horse::position += move;
}

void horse::printLane(){
	int i = 0;
	for(i=0;i<trackLength;i++){
		if(i==horse::position){
			std::cout << index;
		}
		else {
			std::cout << ".";		     }
	}
	std::cout << "\n";
}

bool horse::isWinner(){
	bool win = false;
	if(horse::position == trackLength){
		win = true;
		std::cout << index;
		std::cout << " wins!";
		std::cout << std::endl;
	} //end if
	return win;
}


