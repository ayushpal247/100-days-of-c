#include <stdio.h>

int main() {
    int i, j, space, star;

    for (i = 1; i <= 5; i++) {
        
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 4; i >= 1; i--) {
        
        for (space = 1; space <= 5 - i; space++) {
            printf(" ");
        }
        
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
