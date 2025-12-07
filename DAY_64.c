#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);

    int last[256];
    for(int i = 0; i < 256; i++)
        last[i] = -1;

    int maxLen = 0, start = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        if(last[(unsigned char)s[i]] >= start) {
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i;

        int length = i - start + 1;
        if(length > maxLen)
            maxLen = length;
    }

    printf("Longest substring length = %d", maxLen);

    return 0;
}
