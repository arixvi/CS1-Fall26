#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <doctest.h>
#include "../includes/palindrome.hpp"

TEST_CASE("Testing palindrome::naive function")
{
    SUBCASE("Testing empty string")
    {
        CHECK(palindrome::naive("") == true);
    }
    SUBCASE("Testing single character string")
    {
        CHECK(palindrome::naive("a") == true);
        CHECK(palindrome::naive("Z") == true);
    }
    SUBCASE("Testing palindrome word")
    {
        CHECK(palindrome::naive("hannah") == true);
        CHECK(palindrome::naive("Hannah") == false); // #fixed#
    }
    SUBCASE("Testing non-palindrome word")
    {
        CHECK(palindrome::naive("hello") == false);
        CHECK(palindrome::naive("world") == false);
    }
    SUBCASE("Testing palindrome phrase")
    {
        CHECK(palindrome::naive("A man a plan a canal Panama") == false); // #fixed#
        CHECK(palindrome::naive("Was it a car or a cat I saw") == false);// #fixed#
    }
    SUBCASE("Testing non-palindrome phrase")
    {
        CHECK(palindrome::naive("This is not a palindrome") == false);
        CHECK(palindrome::naive("Another non-palindrome phrase") == false);
    }
}
// FIXME: Add at least 6 edge cases to test palindrome::optimized function
TEST_CASE("Testing palindrome::optimized function") // #fixed#
{
    SUBCASE("Testing empty string") // #fixed#
    {
        CHECK(palindrome::optimized("") == true); // #fixed#
    }
    SUBCASE("Testing mixed capitals") // #fixed#
    {
        CHECK(palindrome::optimized("RaceCar") == true); // #fixed#
    }
    SUBCASE("Testing Spaces and Punctuation") // #fixed#
    {
        CHECK(palindrome::optimized("Race car!") == true);// #fixed#
    }
    SUBCASE("Testing only for punctuation") // #fixed#
    {
        CHECK(palindrome::optimized("! !") == true); // #fixed#
    }
    SUBCASE("Testing for numbers") // #fixed#
    {
        CHECK(palindrome::optimized("12321") == true); // #fixed#
    }
    SUBCASE("Testing non palindrome with punctuation") // #fixed#
    {
        CHECK(palindrome::optimized("Hello, World") == false); // #fixed#
    }
        
}