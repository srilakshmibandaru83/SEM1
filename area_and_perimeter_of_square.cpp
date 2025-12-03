#include <stdio.h>

int main() {
    int side;
    scanf("%d", &side);

    int area = side * side;
    int perimeter = 4 * side;

    printf("%d %d\n", area, perimeter);

    return 0;
}
