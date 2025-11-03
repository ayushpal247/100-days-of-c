#include <stdio.h>

int main() {
    int num, digit, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;           
        if (digit == 0)
            result += 1 * place;    
        else if (digit == 1)
            result += 0 * place;    
        else {
            printf("Invalid binary digit detected.\n");
            return 1;
        }
        num = num / 10;             
        place *= 10;                
    }

    printf("1's complement = %d\n", result);
    return 0;
}
