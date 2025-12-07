#include <stdio.h>

int main() {
    enum Status {SUCCESS, FAILURE, TIMEOUT};
    enum Status stat;

    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    int val;
    scanf("%d", &val);
    stat = val;

    switch(stat) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Invalid input\n");
    }

    return 0;
}
