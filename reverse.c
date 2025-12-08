#include <stdio.h>

int main() {
    int n;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], rev[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse and save into rev[]
    for (int i = 0; i < n; i++) {
        rev[i] = a[n - 1 - i];
    }

    // Display reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}
