/*
  Requirements:
  Write a program that ask the user to enter 5 numbers and store it in
  array called arr_1 using for loop
  Then print the following:
  - Print the 5 elements of arr_1
  - The maximum number in arr_1 and its position in array
  - The minimum number in arr_1 and its position in array
 */
#include <stdio.h>

int main(void)
{
    int arr_1[5];

    printf("Enter 5 numbers:");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr_1[i]);

    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr_1[i]);
    printf("\n");

    int max = arr_1[0], maxPos = 0;
    int min = arr_1[0], minPos = 0;

    for (int i = 1; i < 5; i++)
    {
        if (arr_1[i] > max) { max = arr_1[i]; maxPos = i; }
        if (arr_1[i] < min) { min = arr_1[i]; minPos = i; }
    }

    printf("The maximum Number is %d in position %d\n", max, maxPos);
    printf("The minimum Number is %d in position %d\n", min, minPos);

    // +POINT: bubble sort (ascending)
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (arr_1[j] > arr_1[j + 1])
            {
                int tmp = arr_1[j];
                arr_1[j] = arr_1[j + 1];
                arr_1[j + 1] = tmp;
            }

    printf("Sorted ascending: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr_1[i]);
    printf("\n");

    return 0;
}