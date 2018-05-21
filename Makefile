CXX = g++
CFLAGS = -c -Wall -Werror 
.PHONY: all clean
OBJECTS = build/main.o build/board.o build/boardprint.o build/boardmove.o build/movep.o build/movef.o

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog

build/main.o: src/main.cpp
	$(CXX) $(CFLAGS) src/main.cpp -o build/main.o

build/board.o: src/board.cpp
	$(CXX) $(CFLAGS) src/board.cpp -o build/board.o

build/boardprint.o: src/boardprint.cpp
	$(CXX) $(CFLAGS) src/boardprint.cpp -o build/boardprint.o

build/boardmove.o: src/boardmove.cpp
	$(CXX) $(CFLAGS) src/boardmove.cpp -o build/boardmove.o

build/movep.o: src/movep.cpp
	$(CXX) $(CFLAGS) src/movep.cpp -o build/movep.o

build/movef.o: src/movef.cpp
	$(CXX) $(CFLAGS) src/movef.cpp -o build/movef.o

build:
	mkdir build
bin:
	mkdir bin
clean:
	rm build/*.o
	rm bin/*
