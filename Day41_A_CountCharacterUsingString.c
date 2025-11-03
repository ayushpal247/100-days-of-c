#include <stdio.h>

int main() {
    char str[1000];  
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    while (str[count] != '\0') {
        count++;
    }

    printf("Total characters in the string: %d\n", count);

    return 0;
}
