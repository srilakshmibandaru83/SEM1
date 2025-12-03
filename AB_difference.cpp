#include <stdio.h>
#include <stdlib.h> // for abs()

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = A + B;
    int product = A * B;

    int difference = abs(sum - product);

    printf("%d\n", difference);

    return 0;
}
