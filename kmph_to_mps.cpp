#include <stdio.h>

int main() {
    double speed_kmph;
    scanf("%lf", &speed_kmph);

    double speed_mps = speed_kmph * 1000 / 3600.0;

    printf("%.2lf\n", speed_mps);

    return 0;
}
