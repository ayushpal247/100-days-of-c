#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowercase(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

int areAnagrams(char *str1, char *str2) {
    int freq[256] = {0};  

    toLowercase(str1);
    toLowercase(str2);

    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; str1[i]; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[1000], str2[1000];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
