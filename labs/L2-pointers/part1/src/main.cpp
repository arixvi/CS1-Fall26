// Pointers, enum type and namespace lab
//updated by: Ari Murillo
// Date: 9/25/2026
// Program demonstrates the use of pointers, preprocessor directive, 
// namespace, and enum type.

#include <cstdio>
#include <iostream>
#include <cassert>
#include <string>
#include "../includes/utils.h"

using namespace std;
using namespace my_space;

int main(int argc, char *argv[])
{
    char *input;                  
    big_int *num1;                      // a pointer variable to point to big_int data
    num1 = new big_int;                 // allocate memory in heap and store the address in num1
    big_int *num2 = new large_int;      // declare num2 as a dynamic variable
    large_int *sum = new large_int;     // declare sum as a dynamic variable
    large_int *prod = new large_int;
      // FIXME0 - create a dynamic memory to store a char and store its address in input pointer
    input = new char; //FIXED
    // FIXME1 - declare dynamic variables to store difference and larger values
    // Must use these variables to store the returned values from functions
    large_int *diff = new large_int; //FIXED
    large_int *larger = new large_int; //FIXED

OPERATION oper;
    // FIXME2: Add do... while loop to continue the program until the user wants to quit #FIXED
    // FIXME3: call clear function defined above to clear the screen  #FIXED
do {

   // clear();
    show_menu();
    cin >> *input;
    oper = get_operation(*input);
    switch (oper)
    {
    case ADD: 
        cout << "Enter the whole numbers separated by space: ";
        //store the data by dereferencing pointers
        cin >> *num1 >> *num2;
        //passing pointers to find_sum function
        *sum = find_sum(num1, num2);
        printf("%lld + %lld = %lld\n", *num1, *num2, *sum);
        break;
    case MULTIPLY:
        cout << "Enter the whole numbers separated by space: ";
        // store the data by dereferencing pointers
        cin >> *num1 >> *num2;
        // passing dereferences (actual addresses) of num1 and num2
        *prod = find_product(*num1, *num2);
        printf("%lld * %lld = %lld\n", *num1, *num2, *prod);
        break;
        // FIXME4: complete the rest of the cases to perform other operations
    case SUBTRACT: // FIXED
        cout << "Enter the whole numbers separated by space: ";
        cin >> *num1 >> *num2;
        *diff = find_difference(*num1, *num2);
        printf("%lld - %lld = %lld\n", *num1, *num2, *diff);
        break;
    case LARGER:
        cout << "Enter the whole numbers separated by space: ";
        cin >> *num1 >> *num2;
        *larger = find_larger(num1, num2);
        printf("The larger number is: %lld\n", *larger);
        break;
    default:
        break;
    }
} while (oper != QUIT); 

// delete/deallocate/free memory occupied by all the dynamic variables
delete num1;
delete num2; 
delete sum;
delete prod;
delete diff;
delete larger;

//FIXME5: delete other dynamic variables created above #FIXED

cin.ignore(1000, '\n');
cout << "Good bye! Enter to exit the program...";
cin.get();
return 0;

}  
