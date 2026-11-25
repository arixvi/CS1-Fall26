COMPILER = g++
FLAGS = -std=c++17 -Wall
DOCTEST = includes
SRC = src/main.cpp src/fileio.cpp

build:
	$(COMPILER) $(FLAGS) -o main.exe $(SRC)

run:
	./main.exe

doctest:
	$(COMPILER) $(FLAGS) -I $(DOCTEST) -o test.exe tests/test_fileio.cpp src/fileio.cpp
	./test.exe

clean:
	rm -f *.exe