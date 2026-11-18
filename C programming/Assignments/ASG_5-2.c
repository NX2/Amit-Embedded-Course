/*
  Requirements:
  Write a program to Reverse Array without Using another Array
 */
#include <stdio.h>

#define SIZE 5

int main(void)
{
        int arr[5];

    printf("Enter 5 numbers:");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Original array:   ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // swap first with last, second with second-last
    for (int i = 0; i < SIZE / 2; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = tmp;
    }

    printf("Reverse of array: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}