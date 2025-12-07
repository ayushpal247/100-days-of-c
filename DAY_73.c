#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    // If file is not empty and does not end with newline
    if (chars > 0 && ch != '\n')
        lines++;

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}
