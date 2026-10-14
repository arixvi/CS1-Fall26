#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/fizzbuzz.hpp"

TEST_CASE("fizz_buzz returns words for divisible numbers") {
    SUBCASE("divisible by both returns FizzBuzz") {
        CHECK(fizz_buzz(6, 2, 3) == "FizzBuzz");
    }
    SUBCASE("divisible by x only returns Fizz") {
        CHECK(fizz_buzz(4, 2, 3) == "Fizz");
    }
    SUBCASE("divisible by y only returns Buzz") {
        CHECK(fizz_buzz(9, 2, 3) == "Buzz");
    }
}

TEST_CASE("fizz_buzz returns the number otherwise") {
    SUBCASE("not divisible by either") {
        CHECK(fizz_buzz(7, 2, 3) == "7");
    }
    SUBCASE("first number") {
        CHECK(fizz_buzz(1, 2, 3) == "1");
    }
    SUBCASE("x and y are the same") {
        CHECK(fizz_buzz(5, 5, 5) == "FizzBuzz");
    }
}