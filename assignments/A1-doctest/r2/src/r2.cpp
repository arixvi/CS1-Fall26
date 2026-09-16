/*
Kattis Problem - R2
Implementation file containing the math logic to calculate R2
Programmer: Ari Murillo
Date: 09/16/2026
*/

#include "r2.hpp"

// Calculates R2 using the formula: R2 = 2 * S - R1
int find_r2(int r1, int s) {
    int r2 = 2 * s - r1;
    return r2;
}