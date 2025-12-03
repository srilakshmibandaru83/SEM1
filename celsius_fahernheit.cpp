#include <stdio.h>

int main() {
    double C;
    scanf("%lf", &C);

    double F = (C * 9 / 5) + 32;

    printf("%.2lf\n", F);

    return 0;
}
