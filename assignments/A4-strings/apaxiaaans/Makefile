COMPILER = g++
FLAGS = -std=c++17 -Wall
DOCTEST = includes
SRC = src/main.cpp src/apaxiaaans.cpp

build:
	$(COMPILER) $(FLAGS) -o main.exe $(SRC)

run:
	./main.exe

doctest:
	$(COMPILER) $(FLAGS) -I $(DOCTEST) -o test.exe tests/test_apax.cpp src/apaxiaaans.cpp
	./test.exe

kattis_test:
	kattis test

kattis_submit:
	kattis submit

clean:
	rm -f *.exe

