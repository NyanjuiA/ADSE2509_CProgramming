/* C program that accepts the radius of the circle from the user. The program then calculates and
display's the circles radius, area and circumference. For the area and circumference the  answer
 should be accurate to 3 d.p */
#include <stdio.h>
#define PI 3.14159

int main()
{
   // Variables to be used in the program
   float radius, area, circumference;

   // Prompt the user for the circle's radius
    printf("\nPlease enter the radius of the circle in m ->\n");
    scanf("%f",&radius);

    // Calculate the area A=IIr^2
    area = PI * (radius * radius);

    // Calculate the circumference C = IId
    circumference = PI * (radius * 2);

    // Display the circle's dimensions
    printf("\n--------------------------------------");
    printf("\nCircle\'s Dimensions");
    printf("\n--------------------------------------");
    printf("\n%13s: %8.3f m.", "Radius", radius);
    printf("\n%13s: %8.3f m2.", "Area",area);
    printf("\n%13s: %8.3f m.","Circumference",circumference);
    printf("\n--------------------------------------");

    return 0;
}
