// Test file for utils.cpp
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h> // FIXME: adjust the path as needed #fixed#
#include "../includes/utils.hpp"

TEST_CASE("Test find_difference Functionality")
{
    SUBCASE("Sub Case 1: Positive numbers")
    {
        double result = find_difference(10.5, 5.5);
        CHECK(result == 5.0);
    }
    SUBCASE("Sub Case 2: Negative and positive numbers")
    {
        double result = find_difference(-5.0, 10.0);
        CHECK(result == -15.0);
    }
    // FIXME12: Write test cases for find_difference function with at least 2 subcases
    SUBCASE("Sub Case 3: Both negative numbers") // #fixed#
    { // #fixed#
        double result = find_difference(-4.0, -6.0); // #fixed#
        CHECK(result == 2.0); // #fixed#
    } // #fixed#
    SUBCASE("Sub Case 4: Subtracting zero") // #fixed#
    { // #fixed#
        double result = find_difference(7.0, 0.0); // #fixed#
        CHECK(result == 7.0); // #fixed#
    } // #fixed#
}

TEST_CASE("Test find_product Functionality")
{
    SUBCASE("Sub Case 1: Positive numbers")
    {
        double result = find_product(3.0, 4.0);
        CHECK(result == 12.0);
    }
    SUBCASE("Sub Case 2: Negative and positive numbers")
    {
        double result = find_product(-2.0, 5.0);
        CHECK(result == -10.0);
    }
    // FIXME13: Write test cases for find_product function with at least 2 subcases
    SUBCASE("Sub Case 3: Multiplying by zero") // #fixed#
    { // #fixed#
        double result = find_product(9.0, 0.0); // #fixed#
        CHECK(result == 0.0); // #fixed#
    } // #fixed#
    SUBCASE("Sub Case 4: Both negative numbers") // #fixed#
    { // #fixed#
        double result = find_product(-3.0, -4.0); // #fixed#
        CHECK(result == 12.0); // #fixed#
    } // #fixed#
}

TEST_CASE("Test find_larger Functionality")
{
    SUBCASE("Sub Case 1: Distinct values")
    {
        double result = find_larger(3.5, 7.2);
        CHECK(result == 7.2);
    }
    SUBCASE("Sub Case 2: Equal values")
    {
        double result = find_larger(4.0, 4.0);
        CHECK(result == 4.0);
    }
    // FIXME14: Write test cases for find_larger function with at least 2 subcases
    SUBCASE("Sub Case 3: Both negative numbers") // #fixed#
    { // #fixed#
        double result = find_larger(-2.0, -7.0); // #fixed#
        CHECK(result == -2.0); // #fixed#
    } // #fixed#
    SUBCASE("Sub Case 4: Zero and a positive number") // #fixed#
    { // #fixed#
        double result = find_larger(0.0, 3.0); // #fixed#
        CHECK(result == 3.0); // #fixed#
    } // #fixed#
}

TEST_CASE("Test find_smaller Functionality")
{
    SUBCASE("Sub Case 1: Distinct values")
    {
        double result = find_smaller(8.1, 2.3);
        CHECK(result == 2.3);
    }
    SUBCASE("Sub Case 2: Equal values")
    {
        double result = find_smaller(5.5, 5.5);
        CHECK(result == 5.5);
    }
    // FIXME15: Write test cases for find_smaller function with at least 2 subcases
    SUBCASE("Sub Case 3: Both negative numbers") // #fixed#
    { // #fixed#
        double result = find_smaller(-2.0, -7.0); // #fixed#
        CHECK(result == -7.0); // #fixed#
    } // #fixed#
    SUBCASE("Sub Case 4: Zero and a positive number") // #fixed#
    { // #fixed#
        double result = find_smaller(0.0, 3.0); // #fixed#
        CHECK(result == 0.0); // #fixed#
    } // #fixed#
}
TEST_CASE("Test find_quotient Functionality")
{
    SUBCASE("Sub Case 1: Positive numbers")
    {
        double result = find_quotient(10.0, 2.0);
        CHECK(result == 5.0);
    }
    SUBCASE("Sub Case 2: Negative numerator")
    {
        double result = find_quotient(-9.0, 3.0);
        CHECK(result == -3.0);
    }
    // FIXME16: Write test cases for find_quotient function with at least 2 subcases
    SUBCASE("Sub Case 3: Decimal result") // #fixed#
    { // #fixed#
        double result = find_quotient(7.0, 2.0); // #fixed#
        CHECK(result == 3.5); // #fixed#
    } // #fixed#
    SUBCASE("Sub Case 4: Zero numerator") // #fixed#
    { // #fixed#
        double result = find_quotient(0.0, 5.0); // #fixed#
        CHECK(result == 0.0); // #fixed#
    } // #fixed#
}

TEST_CASE("Test find_average Functionality")
{
    SUBCASE("Sub Case 1: Positive numbers")
    {
        double avg;
        find_average(4.0, 6.0, avg);
        CHECK(avg == 5.0);
    }
    SUBCASE("Sub Case 2: Negative and positive numbers")
    {
        double answer;
        find_average(-2.0, 2.7, answer);
        CHECK(answer == doctest::Approx(0.35).epsilon(MAX_ERROR)); // #fixed#
    }
    // FIXME17: Write test cases for find_average function with at least 2 subcases
    SUBCASE("Sub Case 3: Decimal average") // #fixed#
    { // #fixed#
        double avg; // #fixed#
        find_average(1.0, 2.0, avg); // #fixed#
        CHECK(avg == 1.5); // #fixed#
    } // #fixed#
    SUBCASE("Sub Case 4: Both negative numbers") // #fixed#
    { // #fixed#
        double avg; // #fixed#
        find_average(-4.0, -2.0, avg); // #fixed#
        CHECK(avg == -3.0); // #fixed#
    } // #fixed#
}