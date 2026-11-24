#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <iterator>
#include <algorithm>
#include "fileio.hpp"
using namespace std;

int read_data(int *numbers, const string input_file)
{
    // FIXME1: Open input_file for reading data
    ifstream fin(input_file); // #fixed#
    
    int array_len = 0; // #fixed#
    fin >> array_len; // #fixed#
    for (int i = 0; i < array_len; i++) // #fixed#
        fin >> numbers[i]; // #fixed#
    fin.close(); // #fixed#
    // read the data until eof marker and store each num into numbers array
    // return the number of integers read from the file or the first integer
    // in the file which represents the number of integers to read
    return array_len;
}

void write_data(const int *numbers, size_t array_len)
{
    // FIXME2
    /*
    Algorithm steps:
    1. Prompt user to enter output file name
    2. Store and use the file name to open the file in write mode
    3. Write output as shown in output.txt file with proper formatting using iomanip
    */
     string output_file; // #fixed#
    cout << "Enter output file name: ";
    getline(cin, output_file);
    ofstream fout(output_file);

    int *copy = new int[array_len];
    for (size_t i = 0; i < array_len; i++)
        copy[i] = numbers[i];

    fout << "List of Numbers: ";
    for (size_t i = 0; i < array_len; i++)
        fout << numbers[i] << " ";
    fout << endl << endl;

    fout << setw(40) << setfill('=') << "" << setfill(' ') << endl;
    fout << "          Statistical Results" << endl;
    fout << setw(40) << setfill('=') << "" << setfill(' ') << endl;

    fout << setw(8) << left << "Max"
         << setw(8) << left << "Min"
         << setw(9) << left << "Mean"
         << setw(10) << left << "Median"
         << "Range" << endl;

    fout << setprecision(4);
    fout << setw(8) << left << find_max(numbers, array_len)
         << setw(8) << left << find_min(numbers, array_len)
         << setw(9) << left << find_mean(numbers, array_len)
         << setw(6) << right << find_median(copy, array_len)
         << setw(9) << right << find_range(numbers, array_len) << endl;

    delete[] copy;
    fout.close();
}

int find_max(const int *nums, size_t array_len)
{
    // Implement function to find and return maximum value in nums array
    int max = nums[0];
    for (int i = 0; i < array_len; ++i)
        max = (nums[i] > max) ? nums[i] : max;
    return max;
}

int find_min(const int *nums, size_t array_len)
{
    // FIXME3 - implement function to find and return minimum value in nums array
      int min = nums[0]; // #fixed#
    for (size_t i = 0; i < array_len; ++i) // #fixed#
        min = (nums[i] < min) ? nums[i] : min; // #fixed#
    return min; // #fixed#
}

float find_mean(const int *nums, size_t array_len)
{
    // same as average
    long long int sum = 0;
    for (int i = 0; i < array_len; ++i)
        sum += nums[i];
    return sum / float(array_len);
}

int find_range(const int *nums, size_t array_len)
{
    // FIXME6 - implement function that finds and returns the range of the numbers in nums array.
    // Range is defined as the difference between maximum and minimum values in the array.
    return find_max(nums, array_len) - find_min(nums, array_len); // #fixed#
    return 0;
}

float find_median(int *nums, size_t array_len)
{
    // Find the median of the numbers in nums array.
    // Median is defined as the middle value when the numbers are sorted in order.
    // If there is an even number of values, the median is the average of the two middle values.
    sort(nums, nums + array_len);
    float median;
    if (array_len % 2 == 0)
    { // even set of numbers
      // median = average of middle two numbers
        median = (nums[array_len / 2 - 1] + nums[array_len / 2]) / 2.0;
    }
    else
    { // odd set
        median = nums[array_len / 2];
    }
    return median;
}