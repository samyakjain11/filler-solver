CC=g++
CFLAGS=-c -Wall
INCLUDE_DIRS=-I./include

all: your_program

your_program: main.o GameInfo.o BacktrackingSolver.o
	$(CC) main.o GameInfo.o BacktrackingSolver.o -o your_program

main.o: src/main.cc
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) src/main.cc -o main.o

GameInfo.o: src/GameInfo.cc include/GameInfo.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) src/GameInfo.cc -o GameInfo.o

BacktrackingSolver.o: src/BacktrackingSolver.cc include/BacktrackingSolver.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) src/BacktrackingSolver.cc -o BacktrackingSolver.o

clean:
	rm -rf *.o cpp-solver
