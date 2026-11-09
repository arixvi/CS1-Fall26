COMPILER = g++
FLAGS = -std=c++17 -Wall
DOCTEST = includes
SRC = src/main.cpp src/lineup.cpp

build:
	$(COMPILER) $(FLAGS) -o main.exe $(SRC)

run:
	./main.exe

doctest:
	$(COMPILER) $(FLAGS) -I $(DOCTEST) -o test.exe tests/test_lineup.cpp src/lineup.cpp
	./test.exe

kattis_test:
	kattis test

kattis_submit:
	kattis submit

clean:
	rm -f *.exe