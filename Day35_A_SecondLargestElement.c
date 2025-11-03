#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest element found.\n");
    else
        printf("Second largest element is: %d\n", second);

    return 0;
}
