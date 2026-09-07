#Makefile

CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = echoechoecho

all: $(TARGET)

$(TARGET): src/echoechoecho.cpp
	$(CXX) $(CXXFLAGS) src/echoechoecho.cpp -o $(TARGET)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	kattis test