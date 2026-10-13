#include "sorttwonumbers.hpp"

// finds and returns the smaller of the two numbers
int find_smaller(const int *n1, const int *n2)
{
    int smaller = (*n1 <= *n2) ? *n1 : *n2;
    return smaller;
}

// finds and returns the larger of the two numbers
int find_larger(const int *n1, const int *n2)
{
    int larger = (*n1 >= *n2) ? *n1 : *n2;
    return larger;
}