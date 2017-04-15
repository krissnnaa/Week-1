#include <stdio.h>

#include <stdlib.h>

void sort(int *A, int array_size) {

 int i,j,temp;

 for (i = 1; i < array_size; i++) {

  temp = *(A+i);

  for(j = i-1;j>=0;j--){

  if(*(A+j)>temp)
  {

    *(A+j+1) = *(A+j);
  }
   else
   break;


  }

 *(A+j+1)= temp;

 }
}


int main() {

 int n,i,j;

 int *array;

 printf("Enter an integer n: ");

 scanf("%d", &n);

 // dynamic array using malloc.
 array = malloc(n * sizeof(int));

 // assigns random numbers
 for (i=0; i<n; i++) {

  *(array+i) = rand() % 10;
 }

 // Prints unsorted array
 printf("The unsorted array is: ");

 for (j = 0; j< n; j++) {

  printf("%d ", *(array+j));

 }

 // Calls the sort function to sort the array
 sort(array, n);

 // Prints sorted array.
 printf("\nThe sorted array is: ");

 for (j = 0; j < n; j++) {

  printf("%d ", *(array+j));

 }
 printf("\n");

 //Releasing memory allocated by an array
 free(array);

  return 0;
}
