/*
Kattis Problem - R2
Unit tests to make sure our find_r2 function works correctly
Programmer: Ari Murillo
Date: 09/11/2026
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN //tells the doctest.h header library to create a main() function specifically for running unit tests
#include "doctest.h"
#include "r2.hpp"

TEST_CASE("testing r2 logic") {
    // Checks normal positive numbers
    CHECK(find_r2(11, 15) == 19);
    CHECK(find_r2(4, 3) == 2);
    
    // Checks zeroes and negative numbers
    CHECK(find_r2(0, 0) == 0);
    CHECK(find_r2(-10, 5) == 20);
}