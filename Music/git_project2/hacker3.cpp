#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
/* Declare and initialise an int array with the first 2 fibonacci numbers 1 and 1 */
/* The size of the array should be NUM_FIBON. */
int *fibonacci;
int sizeOfArray;
/* Display the purpose of the program */
printf("\nThis program displays the fibonacci numbers\n\n");
printf("Enter the number of Fibonacci numbers to compute: ");
scanf("%i", &sizeOfArray);
fibonacci = malloc(sizeof(int) * sizeOfArray);
fibonacci[0]=1;
fibonacci[1]=1;

/* Populate the array with other fibonacci numbers, starting with the 3rd number */
/* Each fibonacci number is the sum of the previous two */
for(i=2; i<sizeOfArray; i++)
{
 fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
}

/* Print message: 
 * Calculation over.
 * Press [Enter] to display the first x fibonacci numbers
 *
 * then wait for the [Enter] key to be pressed.  
 */
printf("Calculation over \nPress ENTER to display the first %i fibonacci numbers\n\n", sizeOfArray);


/* Print the 12 first fibonacci numbers */
for(i=0; i<sizeOfArray; i++)
{
 if (i % 10 == 0)
 {
  printf("\n");
  printf("%-8i", fibonacci[i]);
 }
 else
 {
  printf("%-8i", fibonacci[i]);
 }
}
free(fibonacci);

/* Pause so the result can be seen when the program starts from windows explorer */ 
getch();

/* Return success code to the operating system */
return 0;
