// use double \\ bc it has special fn in c++
/*
    StdIO Lab
    Printing ASCII Art Using Standard Input/Output

    Updated By: Ari Murillo
    Date: 09/06/2026

    This program produces an ASCII art on the console using C++ std IO.

    Algorithm steps:
    1. print centered header string by using utility formatting functions
    2. prompt the user for the lab title and read the input string using getline
    3. Center and print the lab title
    4. Output the 5 row ascii art to standard output
*/

#include <iostream> // c++ library to std IO
#include <iomanip> // C++ library for formatting IO
#include <string> // C++ library for string data
#include "util.h" // include the utility header file for center_text function

using namespace std; // resolve cout,cin, endl, etc. identifiers for c++ stdio

// main entry point of the program 
int main ()

{
    cout << center_text(60, "STD IO Lab using C and C++ libraries") << endl;


    // create a string with 75 = signs; center the string and print it out
    string separator(75, '='); 
    cout << center_text(60, separator) << endl;

    // prompt user for lab title
    string lab_title; 
    cout << "Enter the lab title: ";
    getline(cin, lab_title);
    cout << center_text(60,lab_title) << endl;

    // Output ascii art
    cout << "     |\\_/|      *******************************     (\\_/)" << endl;
    cout << "    / @ @ \\     *      ASCII Art              *    (='.'=)" << endl;
    cout << "   ( > 0 < )    *      Author: Ari Murillo    *  ( \" )_( \" )" << endl;
    cout << "     >>x<<      *      CS Foundation Course   *" << endl;
    cout << "     / O \\      *******************************" << endl;

   return 0;
}
