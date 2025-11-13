/* C program that displays the multiples of 8 using a while loop. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variable to be used in the program
    int n =1;
    while( n <= 10)
    {
        printf("%2d x 8 = %02d\n", n , n * 8);
        n += 1;
    }
    return 0;
}
