/*
    Kattis Problem: Echo Echo Echo 
    Programmer: Ari Murillo 
    Date: 09/06/2026 

    Problem Description:
    Write a program that receives a word from standard input and prints 
    it 3 times separated by spaces.

    Algorithm steps:
    1. Declare a string variable to store the input word.
    2. Read the single word from standard input using cin.
    3. Print the word 3 times on one line, separated by spaces. 
*/

#include <iostream>  //C++ standard I/O library
#include <string> // c++ string library

using namespace std;

int main() {
    
    // 1. declare a variable to store the input word
    string word; 

    //2. read word from standard input
    if (cin >> word) {
        
        //3. print the word 3 times with spaces
        cout << word << " " << word << " " << word << endl; 
    }
       return 0;
}