#include <stdio.h>
#include <stdlib.h>


int main() {
    int num, n, new_num;

    // taking in num as an input from the user
    printf("Enter any number: ");
    scanf("%d", &num);

    // asking for which bit to go to and switch it
    printf("Enter the 'nth' bit to toggle (0-31): ");
    scanf("%d", &n);

    // using << to go to the bit and then XOR to invert it
    new_num = num ^ (1 << n);

    // printing the result
    printf("Bit toggled successfully.\n");
    printf("Number before toggling %d bit: %d (in decimal)\n", n, num);
    printf("Number after toggling %d bit: %d (in decimal)\n", n, new_num);

    return 0;
}
