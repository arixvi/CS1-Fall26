/*
Kattis Problem - Sort Two Numbers
Programmer: Ari Murillo
Date: 10/09/2026

Program reads two whole numbers and prints them in increasing order.

Algorithm Steps:
1. Declare two dynamic int variables a and b using new
2.
3. 
4. 
5. 
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "fizzbuzz.hpp"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int *x = new int;
    int *y = new int;
    int *n = new int;

    cin >> *x >> *y >> *n;


    for (int i = 1; i <= *n; i++)
    {
        cout << fizz_buzz(i, *x, *y) << endl;
    }

    delete x;
    delete y;
    delete n;

    return 0;
}