/* C program that demonstrates pointer arithmetic operations. */

#include <stdio.h> // Pre-processor directive with definitions for I/O functions
#include <stdlib.h>

// main function begins program execution
int main()
{
    // Variables to be used in the program
    int arr[] = {5,10,15,20,25}, n;
    int *ptr_arr = arr; // Declare a pointer to the first element in the integer array

    // use a for loop to display the original element normally & using pointers
    for (n = 0; n < sizeof(arr) / sizeof(arr[0]); n++)
      printf("\nNormal access: %2d \tPointer Access: %2d",arr[n],*(ptr_arr + n));

    // Pointer arithmetic operations
    for (n = 0; n < sizeof(arr) / sizeof(arr[0]); n++)
      printf("\nAddress of element %2d: %p \tValue of element %d : %2d", n +1, ptr_arr + n,
             n + 1, (*ptr_arr + n));

    // Subtracting pointers
    printf("\nSubtracting pointers");
    printf("\nDifference between the 5th element (ptr_arr + 4) and the 2nd element (ptr_arr + 1) is"
              " %ld elements.", (ptr_arr + 4) - (ptr_arr + 1));

  // Incrementing and decrementing
  printf("\nOriginal value of the first element in the arr[] array is: %d.",*ptr_arr);
  (*ptr_arr)++; // Increment the value of the 1st element by 1 (i.e. 5 + 1)
  printf("\nAfter incrementing the value of the first element by 1 we get: %d", *ptr_arr);
  printf("\nOriginal value of the second element in the arr[] array is: %d.",*(ptr_arr + 1));
  (*(ptr_arr + 1))--; // Decrement the value of the 2nd element by 1 (i.e. 10 - 1)
  printf("\nAfter decrementing the value of the second element by 1 we get: %d", *(ptr_arr +1));


    return 0;
}
