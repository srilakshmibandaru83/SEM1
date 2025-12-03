#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int mod = num1 % num2;
    printf("%d\n", mod);

    return 0;
}
