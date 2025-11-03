#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
