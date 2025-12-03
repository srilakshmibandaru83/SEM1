#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T;
    scanf("%lf %lf %lf", &P, &R, &T);

    double amount = P * pow((1 + R / 100.0), T);
    double CI = amount - P;

    printf("%.2lf\n", CI);

    return 0;
}
