/*

  Requirements:
  Implement a program that takes from user two numbers and pass them to a
  void function called swap.
  This function receive the two numbers in two variables x and y and print
  the two variables then swap their values and Print x and y again after
  swapping.

 */
#include <stdio.h>

void swap(int x, int y)
{
    printf("before swapping\n");
    printf("x = %d    y = %d\n", x, y);

    /* swap without a third variable */
    x = x + y;
    y = x - y;   /* (x+y) - y = original x */
    x = x - y;   /* (x+y) - original x = original y */

    printf("after swapping\n");
    printf("x = %d    y = %d\n", x, y);
}

int main(void)
{
    int a, b;

    printf("Enter first number:");
    scanf("%d", &a);
    printf("\nEnter second number:");
    scanf("%d", &b);

    swap(a, b);
    return 0;
}
