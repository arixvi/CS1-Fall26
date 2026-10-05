/*
Kattis Problem - Leggjasaman
Programmer: Ari Murillo
Date: 10/02/2026

Algorithm Steps:
1. Declare pointer variables n and m
2. Allocate dynamic memory for n and m
3. Read n and m from standard input
4. Call find_total function to compute the total
5. Print the total
*/

#include <iostream>
#include "leggjasaman.hpp"

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int *n = new int;
    int *m = new int;

    cin >> *n >> *m;

    int total = car_space::find_total(n, m);

    cout << total << endl;

    delete n;
    delete m;

    return 0;
}
