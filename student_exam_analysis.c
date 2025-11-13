/* C program that accepts students scores in an exam, calculates and displays the mean score and grade. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions

// main function begins program execution
int main()
{
    // Variables to be used in the program
    unsigned short numOfStudents, numOfSubjects;
    unsigned short n, a; // looping variables

    // Prompt the user for the number of students and subjects they'll be taking
    printf("Please enter the number of students in the class:\n");
    scanf("%hu", &numOfStudents);
    printf("Please enter the number of subjects the students are taking:\n");
    scanf("%hu", &numOfSubjects);

    // Single-dimension array to hold each student's total, avg./mean and grade
    unsigned int total[numOfStudents];
    float mean[numOfStudents];
    char grade[numOfStudents];

    // Two-dimensional array to hold the names of students, subjects and score per subject
    char studentNames[numOfStudents][20], subjectNames[numOfSubjects][15];
    char comment[numOfStudents][12]; // stores a comment e.g. "Excellent!", "Good" & so on.
    unsigned short studentScore[numOfStudents][numOfSubjects]; // Stores each student's score per subject

    // Read in the students' names
    for(n = 0; n < numOfStudents; n++)
    {
        printf("\nPlease enter the name of student %hu ->", n + 1);
        scanf("%s",studentNames[n]);
    }

    // Read in the subject names
    for(n = 0; n < numOfSubjects; n++)
    {
        printf("\nPlease enter the name of subject %hu ->", n + 1);
        scanf("%s",subjectNames[n]);
    }

    // Read in each student's score per subject
    for(n = 0; n < numOfStudents; n++)
    {
        // Initialise each student's total score to 0 'zero'
        total[n] = 0;
        for(a = 0; a < numOfSubjects; a++)
        {
            //Prompt the user for the student's score
            printf("\nPlease enter %s's score in %s ->",studentNames[n],subjectNames[a]);
            scanf("%hu",&studentScore[n][a]);
            total[n] += studentScore[n][a];
        }
        // calculate each student's mean/avg. score
        mean[n] = total[n] /(float)numOfSubjects;

        // Get each student grade based on their mean score
        if (mean[n] >= 70)
            grade[n] = 'A';
        else if (mean[n] >= 60)
            grade[n]= 'B';
        else if (mean[n] >= 50)
            grade[n] = 'C';
        else if (mean[n]>= 40)
            grade[n] = 'D';
        else
            grade[n] = 'E';

        // TODO: Assignment => use a switch case to assign the student a comment
        // hint: use a function from the <string.h> header file.
    } // End of outer for loop

    // Display the results
    printf("\n%-12s ",  "Student Name" );
    for(a = 0; a < numOfSubjects; a++)
        printf("%-12s",subjectNames[a]);
    printf("%-8s %-8s %-8s","Total", "Average", "Grade");
    for(n = 0; n < numOfStudents; n++)
    {
       printf("\n%-12s",studentNames[n]);
       for(a = 0; a< numOfSubjects; a++)
       {
          printf("%-12hu",studentScore[n][a]);
       }
       printf("%-8u %-8.2f %-8c",total[n],mean[n],grade[n]);
    }

    // Check whether the score is valid or invalid
//    if (score < 0 || score >100)  // also if (score >= 0 and score <= 100)
//    {
//        printf("\n%d is an invalid score.",score);
//    }
//    else
//    {
//        printf("\n%d is a valid score.",score);
//    }

    return 0;
}
