#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Each Rs.2000 note equals 4 Rs.500 notes
    int notes_needed = N * 4;

    printf("%d\n", notes_needed);

    return 0;
}
