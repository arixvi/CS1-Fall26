/*
Problem: Apaxiaaans Kattis Problem
Programmer: Ari Murillo
Date: 10/23/2026
Class: CSCI 111 Foundations of Computer Science
Term: Fall 2026

Algorithm Steps:
1. Read the name
2. Make an empty anmswer string
3. Go through each letter ofthe name
4. Add the letter to answer if it's the first letter or different from the letter before it
5. Print answer
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "apaxiaaans.hpp"


using namespace std;

int main() {
    string *name = new string;
    cin >> *name;
    cout << compact(*name) << endl;
    delete name;
    return 0;
}
