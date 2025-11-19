/* C program to demonstrate working with strings and various string functions */

#include<stdio.h>
#include<string.h>

void  main()
{
    // Variable(s) to be used in program
    char myString[80];

    // Prompt the user to enter a string of their choice
    puts("Please enter a brief message below: ");
    // Read in the string from the user
    // gets(myString); considered unsafe

    // Read in the string using fgets() and manually remove the \n using strcspn() (string complement span) function.
   //fgets(myString,sizeof(myString),stdin);
    // Remove the "\n" when "myString" is not null
//    if(myString != NULL)
//        myString[strcspn(myString,"\n")] ='\0';

    // Display the string entered by the user
//    printf("\nYour gave us:\n%s",myString);

    // Other strings
    char str1[] = "Good";
    char str2[] = "Afternoon!";
    //char *str3 = strcat(str1, " ");
    char str3[25];  // Declare string 3
    strcat(str3,str1);
      // Display string 3
    printf("\n\'str3\' holds the value: \n%s",str3);
    strcat(str3," ");
      // Display string 3
    printf("\n\'str3\' holds the value: \n%s",str3);
     strcat(str3,str2); // Concatenated string is now "Good Afternoon!"
    printf("\n\'str3\' holds the value: \n%s",str3);
    strcpy(str1,"Hello");
    strcpy(str2,"World");

    // Display string 3
    //printf("\n\'str3\' holds the value: \n%s",str3);

    // Compare string1 and string2 using the strcmp() function
    if(strcmp(str1,str2) == 0)
      printf("\n\'%s\' is the same as \'%s\'",str1,str2);
    else if(strcmp(str1,str2) < 0)
      printf("\n\'%s\' is lexicographically less than \'%s\'",str1,str2);
   else
      printf("\n\'%s\' is lexicographically greater than \'%s\'",str1,str2);

   // Display the occurrence of a character and string in a string using strchr() and strstr() repectively
   char s4[] = "coffee";
   printf("\nThe first \'f\' in \"%s\" is stored in memory location/address %p.",s4, strchr(s4,'f'));
   char s5[] = "hamburger";
   printf("\nThe first occurrence of \"urge\" in \"%s\" is stored in memory location/address %p.",s5, strstr(s5,"urge"));

   // Display the length of the string "Good Afternoon" in 'str3'
   printf("\nThe length of the string \"%s\" is %d characters.",str3,strlen(str3));


}
