#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Capitalize first character if letter
    if(len > 0 && isalpha(str[0]))
        str[0] = toupper(str[0]);

    for(int i = 1; i < len; i++) {
        if(str[i-1] == ' ' && isalpha(str[i]))
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("%s", str);
    return 0;
}
