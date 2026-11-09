/*
Problem: Falling Apart Kattis Problem
Programmer: Ari Murillo
Date: 11/08/2026
Class: CSCI 111 Foundations of Computer Science
Term: Fall 2026

Algorithm Steps:
1. Read n, the number of pieces
2. Make a dynamic array of n ints and read the pieces into it
3. Sort the pieces from largest to smallest
4. Alice takes pieces at index 0, 2, 4, ... and Bob takes 1, 3, 5, ...
5. Print Alice's total and Bob's total
6. Delete the dynamic array
*/

#include <iostream>
#include "fallingapart.hpp"

using namespace std;

int main() {
    int n;
    cin >> n;
    int *pieces = new int[n];   // dynamic array
    for (int i = 0; i < n; i++)
        cin >> pieces[i];
    sortDescending(pieces, n);
    cout << playerSum(pieces, n, 0) << " " << playerSum(pieces, n, 1) << endl;
    delete[] pieces;
    return 0;
}