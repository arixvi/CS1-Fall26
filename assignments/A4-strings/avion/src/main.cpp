/*
Problem: Avion Kattis Problem
Programmer: Ari Murillo
Date: 10/27/2026
Class: CSCI 111 Foundations of Computer Science
Term: Fall 2026

Algorithm Steps:
1. Repeat 5 times: read a code
2. If the code contains "FBI", add its row number to answer
3. If answer is empty, print "HE GOT AWAY!"
4. Otherwise, print answer
*/

#include <iostream>
#include <string>
#include "avion.hpp"

using namespace std;

int main() {
    string *code = new string;   
    string answer = "";
    for (int i = 1; i <= 5; i++) {
        cin >> *code;
        if (hasFBI(*code)) {
            if (answer != "")
                answer += " ";
            answer += to_string(i);
        }
    }
    if (answer == "")
        cout << "HE GOT AWAY!" << endl;
    else
        cout << answer << endl;
    delete code;
    return 0;
}