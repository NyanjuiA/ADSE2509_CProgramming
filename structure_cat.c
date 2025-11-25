/* C program that demonstrates declaring a structure, creating variables of its type, assigning them value by hard-coding
    and via user input and displaying them on the console. */

#include <stdio.h>
#include <string.h>

// Declare a category structure
struct cat
{
    char bk_name[25];
    char author[20];
    int edn;
    float price;
};

int main()
{
    // Declare variables of type cat
    struct cat book1, book2;
    // Assign or hard-code the  details of book1
    strcpy(book1.bk_name,"My First Book");
    strcpy(book1.author,"Author 1");
    book1.edn = 1;
    book1.price = 2500.5;

    // Display the details of book1
    printf("\nBook1 details are:");
    printf("\nBook Name: %s",book1.bk_name);
    printf("\nBook Author: %s",book1.author);
    printf("\nBook Edition: %d",book1.edn);
    printf("\nBook Price: %.2f",book1.price);

    //------------------------------------------------------
    // Read in the values of book2 from the user
    //------------------------------------------------------
    // Ask/prompt the user to input the details for book2
    printf("\nEnter the details for book2 below:");

    // Read in the book's name/title
    printf("\nPlease enter the name of the book\n");
    fgets(book2.bk_name,sizeof(book2.bk_name),stdin);
    book2.bk_name[strcspn(book2.bk_name,"\n")] = '\0'; // Remove newline character

    // Read in the book's author
    printf("\nPlease enter the author's name\n");
    fgets(book2.author,sizeof(book2.author),stdin);
    book2.author[strcspn(book2.author,"\n")] = '\0'; // Remove newline character

    // Read in the book's Edition
    printf("\nPlease enter the book\'s edition\n");
    scanf("%d",&book2.edn);

    // Read in the book's price
    printf("\nPlease enter the book\'s price\n");
    scanf("%f",&book2.price);

    // Display the details of book2
    printf("\nBook2 details are:");
    printf("\nBook Name: %s",book2.bk_name);
    printf("\nBook Author: %s",book2.author);
    printf("\nBook Edition: %d",book2.edn);
    printf("\nBook Price: %.2f",book2.price);

    return 0;
}// NB: It's strongly recommended you use int main() rather than void main() or just main()
