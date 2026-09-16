#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN // lets doctest create main() for us
#include "doctest.h"   // doctest library
#include "twosum.hpp"  // add_two() function

TEST_CASE("adding two small positive numbers") {
    CHECK(add_two(1, 1) == 2); // checks that the sum is correct
    CHECK(add_two(2, 2) == 4);
}

TEST_CASE("adding when one number is zero") {
    CHECK(add_two(0, 5) == 5); // zero shouldn't change the other number
    CHECK(add_two(5, 0) == 5);
}

TEST_CASE("adding two bigger numbers") {
    CHECK(add_two(1000, 1000) == 2000); // works with larger values too
}