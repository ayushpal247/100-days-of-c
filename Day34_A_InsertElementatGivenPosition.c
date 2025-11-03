#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};  
    int size = 5;         
    int element, position;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (0 to %d): ", size);
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
