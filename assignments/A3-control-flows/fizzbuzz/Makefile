CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iincludes

build:
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/main.cpp src/fizzbuzz.cpp -o build/fizzbuzz

run: build
	./build/fizzbuzz

doctest:
	mkdir -p build
	$(CXX) $(CXXFLAGS) tests/test_fizzbuzz.cpp src/fizzbuzz.cpp -o build/test_fizzbuzz
	./build/test_fizzbuzz

kattis_test:
	kattis test

kattis_submit:
	kattis submit src/main.cpp src/fizzbuzz.cpp src/fizzbuzz.hpp

clean:
	rm -rf build a.out src/*.gch