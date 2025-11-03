#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};  
    int size = 5;                         
    int position;

    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);

    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;  

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
