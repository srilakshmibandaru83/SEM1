#include <stdio.h>

int main() {
    double CP, SP;
    scanf("%lf %lf", &CP, &SP);

    double loss = CP - SP;
    double lossPercentage = (loss / CP) * 100.0;

    printf("%.2lf\n", lossPercentage);

    return 0;
}
