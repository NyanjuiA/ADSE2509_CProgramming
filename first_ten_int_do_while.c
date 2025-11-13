/* C program that displays the first ten integers using a do...while loop. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variable to be used in the program
    int n = 1;
    do
    {
       printf("Current value of n is: %02d \n",n);
       n++;
    }while(n <= 10);
    return 0;
}
