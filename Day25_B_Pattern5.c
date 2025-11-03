#include <stdio.h>

int main() {
    int i, j, space, star;

    for (i = 5; i >= 1; i--) {
        
        for (space = 0; space < 5 - i; space++) {
            printf(" ");
        }
        
        for (star = 1; star <= i; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
