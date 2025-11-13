/* C program that displays the first ten integers using a for loop. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variable to be used in the program
    int n;
    for(n = 11; n <= 10; n++)
    {
        printf("Current value of n is: %02d \n",n);
    }
    return 0;
}
