#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "../src/pokerhand.hpp"

TEST_CASE("Test poker hand")
{
    SUBCASE("Test max same rank 1")
    {
        pokerhand::Hand h1{{{'2', 'H'}, {'3', 'D'}, {'4', 'C'}, {'5', 'S'}, {'6', 'H'}}, 0};
        CHECK(pokerhand::find_max_same_rank(h1) == 1);
    }

    SUBCASE("Test max same rank 2")
    {
        pokerhand::Hand *h2 = new pokerhand::Hand();
        h2->cards[0] = {'2', 'H'};
        h2->cards[1] = {'2', 'D'};
        h2->cards[2] = {'4', 'C'};
        h2->cards[3] = {'5', 'S'};
        h2->cards[4] = {'6', 'H'};
        h2->max_same_rank = pokerhand::find_max_same_rank(*h2);
        CHECK(h2->max_same_rank == 2);
        delete h2;
    }
    // FIXME - add more test cases for max same rank 3, 4 and 5
      SUBCASE("Test max same rank 3") // #fixed#
    {
        pokerhand::Hand h3{{{'A', 'H'}, {'2', 'D'}, {'A', 'S'}, {'A', 'C'}, {'3', 'H'}}, 0};
        CHECK(pokerhand::find_max_same_rank(h3) == 3);
    }

    SUBCASE("Test max same rank 4")// #fixed#
    {
        pokerhand::Hand h4{{{'K', 'H'}, {'K', 'D'}, {'K', 'S'}, {'K', 'C'}, {'9', 'H'}}, 0};
        CHECK(pokerhand::find_max_same_rank(h4) == 4);
    }

    SUBCASE("Test max same rank 5")// #fixed#
    {
        pokerhand::Hand h5{{{'7', 'H'}, {'7', 'D'}, {'7', 'S'}, {'7', 'C'}, {'7', 'H'}}, 0};
        CHECK(pokerhand::find_max_same_rank(h5) == 5);
    }
}
