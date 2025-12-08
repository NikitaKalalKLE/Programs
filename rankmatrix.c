 #include <stdio.h>

#define MAX 10

// Function to swap two rows
void swapRows(float mat[MAX][MAX], int row1, int row2, int n) {
    for (int i = 0; i < n; i++) {
        float temp = mat[row1][i];
        mat[row1][i] = mat[row2][i];
        mat[row2][i] = temp;
    }
}

int main() {
    int m, n;
    float mat[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &mat[i][j]);

    int rank = n; // Assume full column rank initially

    for (int r = 0; r < rank; r++) {
        if (mat[r][r] != 0) {
            // Make all rows except r-th row zero in column r
            for (int i = 0; i < m; i++) {
                if (i != r) {
                    float mult = mat[i][r] / mat[r][r];
                    for (int j = 0; j < rank; j++)
                        mat[i][j] -= mult * mat[r][j];
                }
            }
        } 
        else {
            // Find a row below with non-zero element
            int reduce = 1;
            for (int i = r + 1; i < m; i++) {
                if (mat[i][r] != 0) {
                    swapRows(mat, r, i, n);
                    reduce = 0;
                    break;
                }
            }

            if (reduce) {
                // Reduce rank
                rank--;

                // Copy last column to current column
                for (int i = 0; i < m; i++)
                    mat[i][r] = mat[i][rank];
            }

            r--;
        }
    }

    printf("\nRank of the matrix = %d\n", rank);

    return 0;
}
