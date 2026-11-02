#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/apaxiaaans.hpp"


TEST_CASE("compact") {
    SUBCASE("no repeats") {
        CHECK(compact("robert") == "robert");
    }
    SUBCASE("repeats in the middle") {
        CHECK(compact("rooobert") == "robert");
    }
    SUBCASE("many repeats") {
        CHECK(compact("roooooobertapalaxxxxios") == "robertapalaxios");
    }
    SUBCASE("all the same letter") {
        CHECK(compact("aaaaa") == "a");
    }
}