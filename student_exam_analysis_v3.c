/*
   KARIBU KENYA - COLORED Student Grade Calculator
   With score validation + Swahili comments + Rainbow output
   Date: November 10, 2025
*/

#include <stdio.h>
#include <string.h>

// ANSI Color Codes (Works in Linux, macOS, Windows 10+, VS Code, etc.)
#define RESET       "\x1b[0m"
#define BOLD        "\x1b[1m"
#define RED         "\x1b[31m"
#define GREEN       "\x1b[32m"
#define YELLOW      "\x1b[33m"
#define BLUE        "\x1b[34m"
#define MAGENTA     "\x1b[35m"
#define CYAN        "\x1b[36m"
#define WHITE       "\x1b[37m"
#define BG_GREEN    "\x1b[42m"
#define BG_YELLOW   "\x1b[43m"
#define BG_RED      "\x1b[41m"

int main()
{
    unsigned short numOfStudents, numOfSubjects, n, a;

    printf(CYAN BOLD "\n══════════════════════════════════════\n");
    printf("   KARIBU! KENYA STUDENT GRADE SYSTEM  \n");
    printf("══════════════════════════════════════\n" RESET);

    printf(YELLOW "Enter number of students: " RESET);
    scanf("%hu", &numOfStudents);
    printf(YELLOW "Enter number of subjects: " RESET);
    scanf("%hu", &numOfSubjects);

    // Arrays
    unsigned int total[numOfStudents];
    float mean[numOfStudents];
    char grade[numOfStudents];
    char comment[numOfStudents][20];
    char studentNames[numOfStudents][30];
    char subjectNames[numOfSubjects][20];
    unsigned short studentScore[numOfStudents][numOfSubjects];

    while(getchar() != '\n'); // clear buffer

    // === INPUT STUDENT NAMES ===
    printf(MAGENTA BOLD "\nENTER STUDENT NAMES\n" RESET);
    for(n = 0; n < numOfStudents; n++)
    {
        printf(CYAN "Student %hu: " RESET, n+1);
        fgets(studentNames[n], 30, stdin);
        studentNames[n][strcspn(studentNames[n], "\n")] = 0;
    }

    // === INPUT SUBJECT NAMES ===
    printf(MAGENTA BOLD "\nENTER SUBJECT NAMES\n" RESET);
    for(n = 0; n < numOfSubjects; n++)
    {
        printf(CYAN "Subject %hu: " RESET, n+1);
        fgets(subjectNames[n], 20, stdin);
        subjectNames[n][strcspn(subjectNames[n], "\n")] = 0;
    }

    // === ENTER SCORES WITH VALIDATION ===
    for(n = 0; n < numOfStudents; n++)
    {
        total[n] = 0;
        printf(BOLD BLUE "\nSCORES FOR: %s\n" RESET, studentNames[n]);

        for(a = 0; a < numOfSubjects; a++)
        {
            unsigned short score;
            while(1)
            {
                printf(YELLOW "   %s → %s (0-100): " RESET, studentNames[n], subjectNames[a]);
                if(scanf("%hu", &score) && score <= 100)
                {
                    studentScore[n][a] = score;
                    total[n] += score;
                    printf(GREEN "   Valid score saved!\n" RESET);
                    break;
                }
                else
                {
                    printf(RED BOLD "   INVALID! Must be 0-100. Try again!\n" RESET);
                    while(getchar() != '\n');
                }
            }
        }

        mean[n] = total[n] / (float)numOfSubjects;

        // Grade
        if(mean[n] >= 70)      grade[n] = 'A';
        else if(mean[n] >= 60) grade[n] = 'B';
        else if(mean[n] >= 50) grade[n] = 'C';
        else if(mean[n] >= 40) grade[n] = 'D';
        else                   grade[n] = 'E';

        // Swahili Comments
        switch(grade[n])
        {
        case 'A':
            strcpy(comment[n], "BORA SANA!");
            break;
        case 'B':
            strcpy(comment[n], "MZURI SANA");
            break;
        case 'C':
            strcpy(comment[n], "SAWA");
            break;
        case 'D':
            strcpy(comment[n], "JARIBU ZAIDI");
            break;
        case 'E':
            strcpy(comment[n], "FANYA BIDII!");
            break;
        }
    }

    // === FINAL RAINBOW RESULTS ===
    printf(RESET);
    printf(BG_GREEN WHITE BOLD "\n FINAL RESULTS - HONGERA KILA MTU! \n" RESET);

    // Header
    printf(BOLD WHITE);
    printf("%-18s", "STUDENT");
    for(a = 0; a < numOfSubjects; a++)
        printf("%-10s", subjectNames[a]);
    printf("%-8s%-8s%-8s%-15s\n", "TOTAL", "MEAN", "GRADE", "MAONI");
    printf(RESET);

    // Rainbow separator
    printf(MAGENTA);
    for(int i = 0; i < 18 + numOfSubjects*10 + 8*3 + 15; i++) printf("~");
    printf(RESET "\n");

    // Student rows with grade colors
    for(n = 0; n < numOfStudents; n++)
    {
        printf("%-18s", studentNames[n]);

        for(a = 0; a < numOfSubjects; a++)
            printf("%-10hu", studentScore[n][a]);

        printf("%-8u", total[n]);
        printf("%-8.2f", mean[n]);

        // Color the grade
        switch(grade[n])
        {
        case 'A':
            printf(GREEN BOLD "   %c     " RESET, grade[n]);
            break;
        case 'B':
            printf(CYAN BOLD "   %c     " RESET, grade[n]);
            break;
        case 'C':
            printf(YELLOW BOLD "   %c     " RESET, grade[n]);
            break;
        case 'D':
            printf(MAGENTA BOLD "   %c     " RESET, grade[n]);
            break;
        case 'E':
            printf(RED BOLD "   %c     " RESET, grade[n]);
            break;
        }

        // Color the comment
        switch(grade[n])
        {
        case 'A':
            printf(GREEN BOLD "%-15s\n" RESET, comment[n]);
            break;
        case 'B':
            printf(CYAN "%-15s\n" RESET, comment[n]);
            break;
        case 'C':
            printf(YELLOW "%-15s\n" RESET, comment[n]);
            break;
        case 'D':
            printf(MAGENTA "%-15s\n" RESET, comment[n]);
            break;
        case 'E':
            printf(RED BOLD "%-15s\n" RESET, comment[n]);
            break;
        }
    }

    printf(BOLD GREEN "\nASANTE SANA! Program imekamilika. \n");
    printf("Hongera Kenya - Future ni yetu! \n" RESET);

    return 0;
}
