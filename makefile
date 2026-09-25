race: horse.o race.o main.o 
	g++ -g horse.o race.o main.o -o race

main.o: horse.h main.cpp
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: race.h race.cpp
	g++ -c -g race.cpp

clean: 
	rm *.o
	rm race

go: race
	./race

debug: race
	gdb race
