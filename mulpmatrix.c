#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Read dimensions
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check multiplication condition
    if (c1 != r2) {
        printf("\nMultiplication NOT possible (columns of A != rows of B)\n");
        return 0;
    }

    int A[100][100], B[100][100], C[100][100];

    // Read Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    // Read Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix C to zero
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = 0;

    // Matrix Multiplication
    printf("\nResultant Matrix (A × B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
