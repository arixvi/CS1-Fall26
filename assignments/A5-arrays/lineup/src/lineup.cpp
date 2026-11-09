#include "lineup.hpp"

string checkOrder(string names[], int n) {
    bool increasing = true;
    bool decreasing = true;
    for (int i = 0; i < n - 1; i++) {
        if (names[i] > names[i + 1])
            increasing = false;
        if (names[i] < names[i + 1])
            decreasing = false;
    }
    if (increasing)
        return "INCREASING";
    if (decreasing)
        return "DECREASING";
    return "NEITHER";
}