#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    int a[10][10];
    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += a[i][i];  // diagonal element
    }

    printf("\nTrace of the matrix = %d\n", trace);

    return 0;
}
