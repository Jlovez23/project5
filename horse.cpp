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

void horse::init(int index, int trackLength){
	horse::position = 0;
	horse::index = index;
	horse::trackLength = trackLength;
}

void horse::advance(){
	int move = 0;
	srand(time(NULL));
	move = rand() % 1;
	horse::position += move;
}

void horse::printLane(){
	int i = 0;
	for(i=0;i<trackLength;i++){
		if(i==index){
			std::cout << index;
		else:
			std::cout << ".";
	std::cout << "\n"
}

bool horse::isWinner(){
	bool win = false
	if(horse::position == trackLength){
		win = true
		std::cout << index
		std::cout << " wins!"
	return win
}


