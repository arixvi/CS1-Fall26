#include "fizzbuzz.hpp"

using namespace std;

string fizz_buzz(int num, int x, int y)
{
    if (num % x == 0 && num % y == 0)
        return "FizzBuzz";
    else if (num % x == 0)
        return "Fizz";
    else if (num % y == 0)
        return "Buzz";
    else 
        return to_string(num);
}