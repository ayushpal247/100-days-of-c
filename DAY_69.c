#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // size of array

    int nums[n];
    int xorArr = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        xorArr ^= nums[i];
    }

    int xorTotal = 0;
    for(int i = 0; i < n - 1; i++)
        xorTotal ^= i;

    int repeated = xorArr ^ xorTotal;
    printf("%d", repeated);

    return 0;
}
