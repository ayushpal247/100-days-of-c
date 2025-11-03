#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];  
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
