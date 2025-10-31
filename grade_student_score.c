/* C program that accepts a student's score in an exam and grades them according
   to the criteria below
   70 - 100: A
   60 - 69 : B
   50 - 59 : C
   40 - 49 : D
   0  - 39 : E
   . */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variables to be used in the program
    unsigned short score;
    char grade;

    // Prompt the user for the student's score in the exam
    printf("Please enter the student's score in the exam:\n");
    scanf("%hu", &score);

    // Check whether the score is valid or invalid
    if (score < 0 || score >100)
    {
        printf("\n%hu is an invalid score.\nPlease enter a score between 0 - 100.",score);
        return; // Stops further function execution.
    }
    else
    {
        if (score >= 70)
            grade = 'A';
        else if (score >= 60)
            grade = 'B';
        else if (score >= 50)
            grade = 'C';
        else if (score >= 40)
            grade = 'D';
        else
            grade = 'E';
    }
    // Display the results
    printf("\nScore: %hu\nGrade: %c\n",score , grade);

    return 0;
}
