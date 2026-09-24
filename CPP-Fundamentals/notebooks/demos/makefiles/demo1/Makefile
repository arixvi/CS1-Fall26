# Makefile for building a simple C++ program
# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
TARGET = hello.exe
CPP_FILES = $(wildcard *.cpp)

# target: dependencies
.PHONY: all run clean

all: $(TARGET)

# Must use tab for indentation in Makefile
$(TARGET): $(CPP_FILES)
	@# bash commands
	$(CXX) -c $(CXXFLAGS) $(CPP_FILES)
	$(CXX) -o $(TARGET) *.o

run: $(TARGET)
	@./$(TARGET)

clean:
	rm -f $(TARGET) *o
