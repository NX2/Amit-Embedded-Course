/*
  ASG_4-1  
  Requirements:
  Write a program that ask you to enter a value of a variable int x.
  Pass the address of x to a function called edit.
  Increment the value of x by 1 inside the function.
  Print the value of x in the main function before and after calling the
  function edit.
 */
#include <stdio.h>

void edit(int *p)
{
    (*p)++;          
}

int main(void)
{
    int x;

    printf("Enter the value of x:");
    scanf("%d", &x);

    printf("Before calling edit x = %d\n", x);
    edit(&x);
    printf("After  calling edit x = %d\n", x);

    
    int xs[3];
    xs[0] = 5;
    xs[1] = 20;
    xs[2] = 80;

    printf("\nStored numbers: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", xs[i]);
    printf("\n");

    return 0;
}