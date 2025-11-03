#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; 

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime)
            printf("%d\n", i);
    }

    return 0;
}
