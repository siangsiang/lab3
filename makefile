main:Clock.o haha2.o
	g++ -o main Clock.o haha2.o

Clock.o: Clock.h Clock.cpp
	g++ -c Clock.cpp Clock.h

haha2.o: Clock.h haha2.cpp
	g++ -c haha2.cpp Clock.h
