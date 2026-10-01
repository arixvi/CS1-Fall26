#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h> // FIXME: adjust the path as needed
#include "../includes/utils.h"

TEST_CASE("Testing find_sum function")
{
    SUBCASE("Two positive numbers")
    {
        big_int *a = new big_int(10);
        big_int *b = new big_int(4);
        CHECK(my_space::find_sum(a, b) == 14);
        delete a;
        delete b;
    }
    SUBCASE("One negative and one positive number")
    {
        big_int *pos = new big_int(4);
        big_int *neg = new big_int(-5);
        CHECK(my_space::find_sum(neg, pos) == -1);
        delete pos;
        delete neg;
    }

    // FIXME8: Add 2 more test cases to cover edge cases
    SUBCASE("Two negative numbers")
    {
        big_int *n1 = new big_int(-10);
        big_int *n2 = new big_int(-20);
        CHECK(my_space::find_sum(n1, n2) == -30);
        delete n1;
        delete n2;
    }
    SUBCASE("Adding zero")
    {
        big_int *n1 = new big_int(15);
        big_int *n2 = new big_int(0);
        CHECK(my_space::find_sum(n1, n2) == 15);
        delete n1;
        delete n2;
    }
}

TEST_CASE("Testing find_product function")
{
    SUBCASE("Two positive numbers")
    {
        large_int a = 6;
        large_int b = 7;
        CHECK(my_space::find_product(a, b) == 42);
    }
    SUBCASE("One negative and one positive number")
    {
        large_int *n1 = new large_int(10);
        large_int *n2 = new large_int(-5);
        CHECK(my_space::find_product(*n1, *n2) == -50);
        delete n1;
        delete n2;
    }

    // FIXME9: add 2 more test cases to cover edge cases
    SUBCASE("Multiplying by zero")
    {
        large_int a = 100;
        large_int b = 0;
        CHECK(my_space::find_product(a, b) == 0);
    }
    SUBCASE("Two negative numbers")
    {
        large_int a = -4;
        large_int b = -5;
        CHECK(my_space::find_product(a, b) == 20);
    }
}

// FIXME10: Write test cases (with at least 2 subcases) for find_difference function declared in utils.h
TEST_CASE("Testing find_difference function")
{
    SUBCASE("Positive result")
    {
        large_int a = 20;
        large_int b = 5;
        CHECK(my_space::find_difference(a, b) == 15);
    }
    SUBCASE("Negative result")
    {
        large_int a = 5;
        large_int b = 20;
        CHECK(my_space::find_difference(a, b) == -15);
    }
}

// FIXME11: Write test cases (with at least 2 subcases) for find_larger function declared in utils.h
TEST_CASE("Testing find_larger function")
{
    SUBCASE("First argument is larger")
    {
        big_int *n1 = new big_int(100);
        big_int *n2 = new big_int(50);
        CHECK(my_space::find_larger(n1, n2) == 100);
        delete n1;
        delete n2;
    }
    SUBCASE("Second argument is larger")
    {
        big_int *n1 = new big_int(-10);
        big_int *n2 = new big_int(5);
        CHECK(my_space::find_larger(n1, n2) == 5);
        delete n1;
        delete n2;
    }
}

