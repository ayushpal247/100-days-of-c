#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rightRotate(int arr[], int size, int k) {
    k = k % size;  

    reverse(arr, 0, size - 1);
    
    reverse(arr, 0, k - 1);
        reverse(arr, k, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    rightRotate(arr, size, k);

    printf("Array after right rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
