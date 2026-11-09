#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "../src/grading.hpp"

TEST_CASE("Test grading")
{
    SUBCASE("Test grade A")
    {
        Grading g1{90, 80, 70, 60, 50, 95};
        CHECK(g1.find_grade() == 'A');
    }

    SUBCASE("Test grade B")
    {
        Grading g2{90, 80, 70, 60, 50, 80};
        CHECK(g2.find_grade() == 'B');
    }

    SUBCASE("Test grade C")
    {
        Grading g3{90, 80, 70, 60, 50, 70};
        CHECK(g3.find_grade() == 'C');
    }

    // FIXME - add more test cases for D, E and F grades
        SUBCASE("Test grade D") // #fixed#
    {
        Grading g4{90, 80, 70, 60, 50, 60};
        CHECK(g4.find_grade() == 'D');
    }

    SUBCASE("Test grade E") // #fixed#
    {
        Grading g5{90, 80, 70, 60, 50, 55};
        CHECK(g5.find_grade() == 'E');
    }

    SUBCASE("Test grade F") // #fixed#
    {
        Grading g6{90, 80, 70, 60, 50, 49};
        CHECK(g6.find_grade() == 'F');
    }
}