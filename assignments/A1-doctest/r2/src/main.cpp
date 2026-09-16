/*
Kattis Problem - R2
Main program file that reads input from the user and prints the answer
Programmer: Ari Murillo
Date: 09/11/2026
*/

#include <iostream>
#include "r2.hpp"

using namespace std;

int main() {
    int r1;
    int s;
    
    // Read the two numbers given by Kattis
    cin >> r1 >> s;
    
    // Call our function to get the missing number
    int result = find_r2(r1, s);
    
    // Output the answer
    cout << result << endl;
    
    return 0;
}