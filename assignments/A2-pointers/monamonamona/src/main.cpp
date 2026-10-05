/*
Kattis Problem - monamonamona
Print the name three times.
Programmer: Ari Murillo
Date: 09/27/2026

Algorithm Steps:
1. Declare a dynamic variable to store the name
2. Read the first word rom standard output
3. Call build_refrain function to build the refrain
4. Print the refrain
5. Clear allocated dynamic memory
*/

#include <iostream>
#include <string>
#include "monamonamona.hpp"

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your solution here
    string *name = new string;

    cin >> *name;

    string refrain = song_space::build_refrain(name);

    cout << refrain << endl;

    delete name;

    return 0;
}

