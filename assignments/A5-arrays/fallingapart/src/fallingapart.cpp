#include <algorithm>
#include <functional>
#include "fallingapart.hpp"

using namespace std;

void sortDescending(int pieces[], int n) {
    sort(pieces, pieces + n, greater<int>());
}

int playerSum(int pieces[], int n, int start) {
    int sum = 0;
    for (int i = start; i < n; i += 2)
        sum += pieces[i];
    return sum;
}