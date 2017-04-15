#include <stdlib.h>
#include <stdio.h>
int main() {

int i,j,n2=0,n1 = 0;
int *a1;

 printf("Enter original array size: ");

 scanf("%d", &n1);

 // Create a new integer array of n1 size
 a1 = malloc(n1 * sizeof(int));

 i = 0;

 while( i < n1) {

  *(a1+i) = i;

  // Print each element before resizing
  printf("%d ", *(a1+i));
  i++;
 }

 // Enter new array size to resize an array
 printf("\nEnter new array size: ");

 scanf("%d", &n2);

 // Reallocating array with new n2 size
 a1 = realloc(a1, n2* sizeof(int));

 // If the new array is a larger size, set all new members to 0.

 if (n2 > n1) {
        do{
            j = n1;
            *(a1+j)=0;
            ++n1;
        }while(j<n2);
 }

 // Display all elements after resizing
 for (i = 0; i < n2; i++) {

printf("%d ", *(a1+i));
 }
 printf("\n");

 // Free memory after completion of a program
 free(a1);

 return 0;
}
