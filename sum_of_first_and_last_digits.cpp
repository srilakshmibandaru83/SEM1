#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int lastDigit = N % 10;

    int firstDigit = N;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;
    printf("%d\n", sum);

    return 0;
}
