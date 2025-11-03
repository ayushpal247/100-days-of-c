#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    int start = 0, end = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i + 1] != '\0') {
            end++;
        } else {
            if (str[i] == ' ') {
                reverse(str, start, end);
                start = end = i + 1;
            } else if (str[i + 1] == '\0') {
                reverse(str, start, i);
            }
        }
    }

    printf("Modified sentence: %s\n", str);
    return 0;
}
