#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int sumArr = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sumArr += nums[i];
    }

    int totalSum = n * (n + 1) / 2;

    int missing = totalSum - sumArr;

    printf("%d", missing);

    return 0;
}
