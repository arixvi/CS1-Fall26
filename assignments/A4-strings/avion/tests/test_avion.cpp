#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/avion.hpp"

TEST_CASE("hasFBI") {
    SUBCASE("has FBI") {
        CHECK(hasFBI("N-FBI1") == true);
    }
    SUBCASE("no FBI") {
        CHECK(hasFBI("9A-USKOK") == false);
    }
    SUBCASE("lowercase doesn't count") {
        CHECK(hasFBI("fbi") == false);
    }
}