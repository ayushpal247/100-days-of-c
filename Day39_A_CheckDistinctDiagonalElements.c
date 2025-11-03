#include <stdio.h>

int main() {
    int n, isDistinct = 1;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[100][100];
    int diag[100], count = 0;

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                diag[count++] = matrix[i][j];  
            }
        }
    }

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }
    if (isDistinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are not all distinct.\n");

    return 0;
}
