#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <string>

class horse{
	private:
		int position;
		int index;
		int trackLength;
	public:
		horse();
		horse(int index, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
}; //end class def


#endif
