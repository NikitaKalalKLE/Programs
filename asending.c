#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], asc[n], desc[n];

    // Read array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        asc[i] = arr[i];     // copy to asc[]
        desc[i] = arr[i];    // copy to desc[]
    }

    // Sort ascending
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (asc[i] > asc[j]) {
                int temp = asc[i];
                asc[i] = asc[j];
                asc[j] = temp;
            }
        }
    }

    // Sort descending
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (desc[i] < desc[j]) {
                int temp = desc[i];
                desc[i] = desc[j];
                desc[j] = temp;
            }
        }
    }

    // Print results
    printf("\nAscending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", asc[i]);

    printf("\nDescending order: ");
    for (int i = 0; i < n; i++)
        printf("%d ", desc[i]);

    return 0;
}
