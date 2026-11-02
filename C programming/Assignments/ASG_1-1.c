#include <stdio.h>
#include <stdlib.h>

int main()
{
    //num is the number i will be checking on
    int num;

    printf("********** EVEN & ODD CHECKER ***********\n");
    printf("Enter the number :");
    scanf(" %d", &num);

    // if statement to check if bit(0) 1 or 0 , if 1 then its odd else even
    if (num & 1){
        printf("The number is odd = 1\n");
        printf("The number is even = 0\n");

        }else  {
            printf("The number is odd = 0\n");
            printf("The number is even = 1\n");
        }

    return 0;
}
