CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iincludes

build:
	mkdir -p build
	$(CXX) $(CXXFLAGS) src/main.cpp src/sorttwonumbers.cpp -o build/sorttwonumbers

run: build
	./build/sorttwonumbers

doctest:
	mkdir -p build
	$(CXX) $(CXXFLAGS) tests/test_sorttwonumbers.cpp src/sorttwonumbers.cpp -o build/test_sorttwonumbers
	./build/test_sorttwonumbers

kattis_test:
	kattis test

kattis_submit:
	kattis submit src/main.cpp src/sorttwonumbers.cpp src/sorttwonumbers.hpp

clean:
	rm -rf build a.out