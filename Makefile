main:main.o clock.h clock.o
	g++ -o main main.o clock.o clock.h

clock.o:clock.h clock.cpp
	g++ -c clock.cpp

main.o:main.cpp clock.h
	g++ -c main.cpp

clear:
	rm -r *.o
