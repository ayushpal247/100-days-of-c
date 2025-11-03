#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int freq[26] = {0};  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            int idx = str[i] - 'a';
            freq[idx]++;
            if (freq[idx] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
