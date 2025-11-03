#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;  
        else if (arr[mid] < target)
            low = mid + 1;  
        else
            high = mid - 1; 
    }

    return -1;  
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Found %d at index %d\n", target, result);
    else
        printf("%d not found in the array\n", target);

    return 0;
}
