
#include <stdio.h>

// Question 1 function
float divide(float x, float y)
{
    if (y == 0)
    {
        printf("Error: Division by zero!\n");
        return 0;
    }

    return x / y;
}

// Question 3 function 
unsigned char add(unsigned char x, unsigned char y)
{
    return x + y;
}

int main()
{
    int num, count;
    unsigned char a, b;
    float x, y;
    int n;

   
    // Question 1: Divide Two Numbers
   

    printf("\n===== Question 1: Division =====\n");

    printf("Enter first number: ");
    scanf("%f", &x);

    printf("Enter second number: ");
    scanf("%f", &y);

    if (y != 0)
        printf("Result = %.2f\n", divide(x, y));
    else
        divide(x, y);


    
    // Question 2: Count Binary Ones
    

    printf("\n===== Question 2: Count Ones =====\n");

    printf("Enter an integer: ");
    scanf("%d", &num);

    count = 0;

    while (num > 0)
    {
        if (num % 2 == 1)
            count++;

        num = num / 2;
    }

    printf("Number of ones = %d\n", count);


    
    // Question 3: Add Unsigned Characters
    

    printf("\n===== Question 3: Addition =====\n");

    printf("Enter first number (0-255): ");
    scanf("%hhu", &a);

    printf("Enter second number (0-255): ");
    scanf("%hhu", &b);

    printf("Sum = %u\n", (unsigned int)add(a, b));


   
    // Question 4: X Pattern
  

    printf("\n===== Question 4: X Pattern =====\n");

    printf("Enter pattern size: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }


   
    // Question 4: Z Pattern
    

    printf("\n===== Question 4: Z Pattern =====\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || i + j == n - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    printf("\n===== All Questions Completed! =====\n");

    return 0;
}
