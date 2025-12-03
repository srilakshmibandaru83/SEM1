#include <stdio.h>

int main() {
    int a, b, c, greatest;

    // Input three numbers
    printf("Enter first numbers: ");
    scanf("%d ", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);
    printf("Enter third numbers: ");
    scanf("%d ", &c);

    // Use ternary operator to find the greatest
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Output the result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}

