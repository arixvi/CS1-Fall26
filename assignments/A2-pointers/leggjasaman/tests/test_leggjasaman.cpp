#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "leggjasaman.hpp"

TEST_CASE("Testing find_total function")
{
    SUBCASE("Typical case")
    {
        int n = 4;
        int m = 3;
        CHECK(car_space::find_total(&n, &m) == 7);
    }
    SUBCASE("Larger numbers")
    {
        int n = 11;
        int m = 31;
        CHECK(car_space::find_total(&n, &m) == 42);
    }
    SUBCASE("Minimum values")
    {
        int n = 2;
        int m = 2;
        CHECK(car_space::find_total(&n, &m) == 4);
    }
}

