#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/lineup.hpp"

TEST_CASE("checkOrder") {
    SUBCASE("increasing") {
        string names[] = {"GEORGE", "JOHN", "PAUL", "RINGO"};
        CHECK(checkOrder(names, 4) == "INCREASING");
    }
    SUBCASE("decreasing") {
        string names[] = {"JOE", "BOB", "ANDY", "AL", "ADAM"};
        CHECK(checkOrder(names, 5) == "DECREASING");
    }
    SUBCASE("neither") {
        string names[] = {"BB", "AA", "CC"};
        CHECK(checkOrder(names, 3) == "NEITHER");
    }
}