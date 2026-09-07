// use double \\ bc it has special fn in c++
/*
    StdIO Lab
    Printing ASCII Art Using Standard Input/Output

    Updated By: Ari Murillo
    Date: 09/06/2026

    This program produces an ASCII art on the console using C++ std IO.

    Algorithm steps:
    1. Declare variables to store data/values
    3. Write and use function to center text within a give column width
    3. Write a series of input/output statements to get data/values and print them on the console.
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
    
    string separator(75, '='); //making  a string of 75 = characters
    // prompt user for lab title
    cout << center_text(60, separator) << endl;

    string lab_title; // declare a variable to store lab title
    // prompt 
    cout << "Enter the lab title: ";
    getline(cin, lab_title);
    cout << center_text(60,lab_title) << endl;

    // Algorith to print ASCII Art:
    // 1. For the 5 rows of art:
    //     a. print the left cat art piece, padded to jerry_width, left aligned
    //     b. print the middle box piece, padded to middle_width, left aligned
    //     c. print the right cat art piece padded to tom_width, rigth aligned
    //     d. print a new line

    // TEMPORARY DEBUG: check if all middle-box strings are the same length

    cout << "     |\\_/|      *******************************     (\\_/)" << endl;
cout << "    / @ @ \\     *      ASCII Art              *    (='.'=)" << endl;
cout << "   ( > 0 < )    *      Author: Ari Murillo    *  ( \" )_( \" )" << endl;
cout << "     >>x<<      *      CS Foundation Course   *" << endl;
cout << "     / O \\      *******************************" << endl;

   
}
