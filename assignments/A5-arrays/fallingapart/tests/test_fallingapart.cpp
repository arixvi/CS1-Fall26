#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/fallingapart.hpp"

TEST_CASE("playerSum") {
    SUBCASE("odd number of pieces") {
        int pieces[] = {3, 2, 1};
        CHECK(playerSum(pieces, 3, 0) == 4);
        CHECK(playerSum(pieces, 3, 1) == 2);
    }
    SUBCASE("even number of pieces") {
        int pieces[] = {6, 5, 3, 2};
        CHECK(playerSum(pieces, 4, 0) == 9);
        CHECK(playerSum(pieces, 4, 1) == 7);
    }
    SUBCASE("one piece") {
        int pieces[] = {5};
        CHECK(playerSum(pieces, 1, 0) == 5);
        CHECK(playerSum(pieces, 1, 1) == 0);
    }
}

TEST_CASE("sortDescending") {
    int pieces[] = {1, 3, 2};
    sortDescending(pieces, 3);
    CHECK(pieces[0] == 3);
    CHECK(pieces[1] == 2);
    CHECK(pieces[2] == 1);
}