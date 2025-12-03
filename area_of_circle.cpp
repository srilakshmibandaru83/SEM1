#include <stdio.h>

int main() {
    double radius;
    scanf("%lf", &radius);

    double pi = 3.14;
    double area = pi * radius * radius;
    double perimeter = 2 * pi * radius;

    printf("%.2lf\n", area);
    printf("%.2lf\n", perimeter);

    return 0;
}area and perimerter of circle
