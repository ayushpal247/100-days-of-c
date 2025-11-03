#include <stdio.h>

int main() {
    int arr[100] = {2, 4, 6, 8, 10};  
    int size = 5;                     
    int newElement;

    printf("Enter the element to insert: ");
    scanf("%d", &newElement);

    int pos = 0;
    while (pos < size && arr[pos] < newElement) {
        pos++;
    }

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = newElement;
    size++;

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
