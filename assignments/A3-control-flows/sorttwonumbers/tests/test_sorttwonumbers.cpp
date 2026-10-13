#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "../src/sorttwonumbers.hpp"

TEST_CASE("Testing find_smaller function")
{
    SUBCASE("First number is smaller")
    {
        int a = 3;
        int b = 4;
        CHECK(find_smaller(&a, &b) == 3);
    }
    SUBCASE("Second number is smaller")
    {
        int a = 987;
        int b = 23;
        CHECK(find_smaller(&a, &b) == 23);
    }
    SUBCASE("Equal numbers")
    {
        int a = 5;
        int b = 5;
        CHECK(find_smaller(&a, &b) == 5);
    }
}

TEST_CASE("Testing find_larger function")
{
    SUBCASE("First number is larger")
    {
        int a = 10;
        int b = -2;
        CHECK(find_larger(&a, &b) == 10);
    }
    SUBCASE("Second number is larger")
    {
        int a = 3;
        int b = 4;
        CHECK(find_larger(&a, &b) == 4);
    }
    SUBCASE("Both negative")
    {
        int a = -8;
        int b = -3;
        CHECK(find_larger(&a, &b) == -3);
    }
}