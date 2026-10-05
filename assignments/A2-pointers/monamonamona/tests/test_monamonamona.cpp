#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "monamonamona.hpp"

TEST_CASE("Testing build_refrain function")
{
    SUBCASE("Typical case")
    {
        string name = "Mona";
        CHECK(song_space::build_refrain(&name) == "Mona Mona Mona");
    }
    SUBCASE("Different name")
    {
        string name = "Helle";
        CHECK(song_space::build_refrain(&name) == "Helle Helle Helle");
    }
    SUBCASE("Shortest possible name, 2 letters")
    {
        string name = "Al";
        CHECK(song_space::build_refrain(&name) == "Al Al Al");
    }
}