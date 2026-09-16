/*
Kattis Problem - twosum
Print the sum of two integers
Programmer: Ari Murillo
Date: 09/11/2026
*/
#include <iostream>
#include "twosum.hpp"
using namespace std;

int main() {
    unsigned int a, b;
    unsigned long sum;

    cin >> a >> b; // read two integers values from stdin
    sum = add_two(a, b); // add two numbers and store it in sum
    cout << sum << endl; // output the value of sum to stdout w/ a new line

    return 0; // return 0 means success for OS 
}