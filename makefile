CC = g++
CFLAGS = -Wall -g

main.exe: main.o calculator.o 
	$(CC) $(CFLAGS) -o main.exe main.o calculator.o

main.o: main.cpp Calculator.h 
	$(CC) $(CFLAGS) -c main.cpp

calculator.o: Calculator.h

