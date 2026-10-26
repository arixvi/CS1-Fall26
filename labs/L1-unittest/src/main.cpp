#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your solution here
    unsigned int *a = new unsigned int; 
    unsigned int *b = new unsigned int;
    unsigned long *s = new unsigned long;
    cin >> *a >> *b // read two integers values from stdin
    //call a function
    *s = add_two(a, *b) // addd two nums using fn and  
    print_answer(*s); // output the value of 
    delete a;
    delete b;
    delete s;
    return 0; 
}


// github.com/doctest/doctest for doctest.h 

//functions.cpp, functions.hpp, functions.hpp.pch, main.cpp
 