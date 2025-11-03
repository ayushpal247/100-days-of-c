#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  
    int has_even = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even)
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    else
        printf("No even numbers in the range.\n");

    return 0;
}
