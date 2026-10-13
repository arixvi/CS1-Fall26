/*
Kattis Problem - Sort Two Numbers
Programmer: Ari Murillo
Date: 10/09/2026

Program reads two whole numbers and prints them in increasing order.

Algorithm Steps:
1. Declare two dynamic int variables a and b using new
2. Read two integers from standard input into a and b
3. Call find_smaller and find_larger to get the smaller and larger values
4. Print the smaller value, a space, then the larger value
5. Delete a and b to free the dynamic memory
*/

#include <iostream>
#include <string>
#include "sorttwonumbers.hpp"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your solution here
    int *a = new int;
    int *b = new int;

    cin >> *a >> *b;

    int smaller = find_smaller(a, b);
    int larger = find_larger(a, b);

    cout << smaller << " " << larger << endl;

    delete a;
    delete b;

    return 0;
}