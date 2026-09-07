# output program name
CXX = g++
PROGRAM = 	hello.exe

.PHONY: all compile run clean
all: compile run clean
	@echo "all done!"

compile: 
	@$(CXX) -c -Wall -std=c++26 hello.cpp
	$g++ hello.o -o $(PROGRAM) 
#g++ -c hello.cpp 
run: compile
	
	./$(PROGRAM)

clean:
	rm ./$(PROGRAM)