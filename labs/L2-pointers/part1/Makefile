CXX = g++
CXXFLAGS = -Wall -std=c++17 -Iincludes -I../doctest

# Default target: builds main executable
all: build

# Build main executable
build:
	$(CXX) $(CXXFLAGS) src/main.cpp src/utils.cpp -o main

# Run main program
run: build
	./main

# Build and run Doctest unit tests
doctest:
	$(CXX) $(CXXFLAGS) tests/test_utils.cpp src/utils.cpp -o test_runner
	./test_runner

clean:
	rm -f main test_runner

	