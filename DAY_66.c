#include <stdio.h>

int main() {
    int n, target;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    printf("Enter target: ");
    scanf("%d", &target);

    // Brute force: check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    // If no solution found
    printf("-1 -1");
    return 0;
}
