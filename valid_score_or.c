/* C program that accepts a score from the user tell them whether its valid or invalid using the || operator. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variable to be used in the program
    int score;

    // Prompt the user for a score
    printf("Please enter a score and I\'ll tell you if it\'s valid or invalid:\n");
    scanf("%d", &score);

    // Check whether the score is valid or invalid
    if (score < 0 || score >100)  // also if (score >= 0 and score <= 100)
    {
       printf("\n%d is an invalid score.",score);
    }
    else
    {
       printf("\n%d is a valid score.",score);
    }

    return 0;
}
