#include <stdio.h>


int main()
{
    int num, original, temp;
    int digit, digits = 0;
    int sum = 0, power;

    // Get the number from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    // Save the original number
    original = num;
    temp = num;

    // Count the number of digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    // Handle the number zero
    if (num == 0)
    {
        digits = 1;
    }

    // Calculate the sum of powered digits
    temp = num;

    while (temp != 0)
    {
        // Extract the last digit
        digit = temp % 10;

        // Calculate digit raised to the power of digits
        power = 1;

        for (int i = 1; i <= digits; i++)
        {
            power *= digit;
        }

        // Add the result to the sum
        sum += power;

        // Remove the last digit
        temp /= 10;
    }

    // Check whether the number is Armstrong
    if (sum == original)
    {
        printf("%d is an Armstrong Number.\n", original);
    }
    else
    {
        printf("%d is NOT an Armstrong Number.\n", original);
    }

    return 0;
}


