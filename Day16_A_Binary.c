#include <stdio.h>

int main() {
    int num, n, binary = 0, place = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    n = num;  

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        int bit = num % 2;
        binary += bit * place;
        place *= 10;
        num /= 2;
    }

    printf("Binary of %d is: %d\n", n, binary);

    return 0;
}
