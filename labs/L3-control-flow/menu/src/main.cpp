/*
Conditional Lab

Programmer: Ari Murillo
Date: 10/05/2026

Program finds statistical values of two given numbers using user-defined functions.

A menu-driven program that demonstrates user-defined functions, automated testing conditional statements and loop.

Algorithm Steps:
1.If the program is run with "test", run the autoamted tests and exit
2. Otherwise, loop until the user decides to quit
3. Show the menu, read the user's choice, and read two numbers 
4. Call the matching function and print the result
5. Pause, clear the screen, and repeat until the user picks quit
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
#include "../includes/utils.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 2 && string(argv[1]) == string("test"))
    {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    else
    {
        // this loop will keep the program running until user wants to quit
        while (true)
        {
            if (!program()) // call program
                break;      // break loop if program returned false
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clear_screen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Good bye..." << endl;
    cout << "Enter to quit the program.\n";
    cin.get();
    return 0;
}