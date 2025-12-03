#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);  // Getting size of array

    int a[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble Sort with swap logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Displaying sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d,", a[i]);
    }

    return 0;
}

