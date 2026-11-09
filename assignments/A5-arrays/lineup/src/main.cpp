/*
Problem: Line Them Up Kattis Problem
Programmer: Ari Murillo
Date: 11/08/2026
Class: CSCI 111 Foundations of Computer Science
Term: Fall 2026

Algorithm Steps:
1. Read n, the number of names
2. Make a dynamic array of n strings and read the names into it
3. Compare each name with the next one:
   - if any name is bigger than the next, it's not increasing
   - if any name is smaller than the next, it's not decreasing
4. Print INCREASING, DECREASING, or NEITHER
5. Delete the dynamic array
*/

#include <iostream>
#include <string>
#include "lineup.hpp"

using namespace std;

int main() {
    int n;
    cin >> n;
    string *names = new string[n];   // dynamic array
    for (int i = 0; i < n; i++)
        cin >> names[i];
    cout << checkOrder(names, n) << endl;
    delete[] names;
    return 0;
}