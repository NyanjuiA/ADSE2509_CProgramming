/* C program that displays the even multiples of 7 using a for loop. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variable to be used in the program
    int n;
    for(n = 10; n <= 70; n++)
    {
        if(n % 7 == 0 && n % 2 == 0)
         printf("%02d is evenly divisible by 7\n",n);
    }
    return 0;
}
