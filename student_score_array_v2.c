/* C program that accepts students scores in an exam, calculates and displays the mean score. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variables to be used in the program
    unsigned short score[5]; // An array of unsigned shorts to hold the student's score (0 - 100)
    unsigned short n; // Looping variable
    float meanScore; // variable to store/hold the average/mean score
    unsigned int total = 0;

    // Prompt the user for the student's scores while calculating the class total
    for(n = 0; n < 5; n++)
    {
        printf("Please enter the score for student %d: \n", n + 1);
        scanf("%hu",&score[n]);
        total += score[n]; // total = total + score[n];
    }

    // Calculate the mean/avg. score
    meanScore = total / 5.0;

    // Display the mean/avg. score
    printf("\nThe class average/mean score is %.2f",meanScore);


    return 0;
}
