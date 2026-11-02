#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,result;
    char op;

    // Getting the first number
    printf("Enter number_1: ");
    scanf("%f", &num1);

    // getting the operator
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    // getting the second number
    printf("Enter number_2: ");
    scanf("%f", &num2);

    //perform selected operation
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("The result = %.2f\n", result); break;
    case '-':
        result = num1 - num2;
        printf("The result = %.2f\n", result); break;
    case '*':
        result = num1 * num2;
        printf("The result = %.2f\n", result); break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("The result = %.2f\n", result);
        }
        else{
            printf("Error: division by zero is not allowed.\n");
        } break;
    default:
        printf("invalid operator!\n");
    }


    return 0;
}
