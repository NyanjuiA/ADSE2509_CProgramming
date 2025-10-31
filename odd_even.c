/* C program that accepts a number from the user tell them whether its odd or even. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variable to be used in the program
    int userNum;

    // Prompt the user for a number
    printf("Please enter a number and I\'ll tell you if it\'s odd or even:\n");
    scanf("%d", &userNum);

    // Check whether the number is odd or even
    int remainder = userNum % 2;
    if (remainder == 1)
    {
       printf("\n%d is an odd number.",userNum);
    }
    else
    {
       printf("\n%d is an even number.",userNum);
    }

    return 0;
}
