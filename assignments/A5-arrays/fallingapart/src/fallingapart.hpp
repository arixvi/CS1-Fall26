#pragma once

// sorts the pieces from largest to smallest
void sortDescending(int pieces[], int n);

// adds every other piece starting at index start (0 = Alice, 1 = Bob)
int playerSum(int pieces[], int n, int start);