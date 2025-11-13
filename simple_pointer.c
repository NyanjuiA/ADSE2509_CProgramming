/* C program that demonstrates the declaration and use of simple integer pointers. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variables to be used in the program
    int num1 = 5, num2 = 7;
    int *ptr_num1; // Integer pointer declaration
    int num3; // Integer declaration

    // Make *ptr_num1 a pointer to num1
    ptr_num1 = &num1;
    num3 = *ptr_num1; // Assign the value 5 to num3 using a pointer (pointer indirection)
    int *ptr_num3 = &num3;

    // Display the values of num1 & num3 and the memory address
    printf("The original value in num1 is %d and its stored in location/address: %x\n",num1, ptr_num1);
    printf("The original value in num3 is %d and its stored in location/address: %x\n",num3, ptr_num3);

    // Re-assign num1 and display its value
    num1 = 8;
    printf("The modified value in num1 is %d and its stored in location/address: %x\n",num1, ptr_num1);

    // Re-assign num3 using its pointer and display its value
    *ptr_num3 = 4;
    printf("The modified value in num3 is %d and its stored in location/address: %x\n",num3, ptr_num3);


    return 0;
}
