/* C program that accepts a vowel from the user and check whether it's a vowel. */

#include <stdio.h>
#include <ctype.h> // Contains the definition for tolower() function

int main()
{
    // Variable to be used in the program
    char userLetter;

    // Prompt the user for a character
    printf("Please enter a character and I\'ll tell you if it\'s a vowel:\n");
    scanf("%c", &userLetter);

    // Convert the user's input to lowercase
    userLetter = tolower(userLetter);

    // Check whether the user's letter is a vowel
    if(userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' ||userLetter == 'u' )
        printf("\n%c is a vowel.",userLetter);

    return 0;
}
