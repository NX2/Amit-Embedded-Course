/*

  Requirements:
  Write a program to Display Fibonacci Sequence Using the Recursion Method
  and iterative Method
 */
#include <stdio.h>

/* Recursive: fib(n) = fib(n-1) + fib(n-2) */
int fib_recursive(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

/* Iterative: keep the two previous terms in a loop */
void fib_iterative(int terms)
{
    long long a = 0, b = 1, next;

    for (int i = 0; i < terms; i++)
    {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main(void)
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series (Recursion): ");
    for (int i = 0; i < n; i++)
        printf("%d ", fib_recursive(i));
    printf("\n");

    printf("Fibonacci Series (Iterative): ");
    fib_iterative(n);

    return 0;
}
