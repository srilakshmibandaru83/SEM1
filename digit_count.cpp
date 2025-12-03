#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int temp = N;

    while (temp != 0) {
        temp /= 10;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
