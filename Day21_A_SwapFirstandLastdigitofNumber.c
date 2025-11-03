#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    first = temp;

    int pow = 1;
    for (int i = 0; i < digits; i++) {
        pow *= 10;
    }
    int middle = num % pow;
    middle = middle / 10;
    int swapped = last * pow + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}
