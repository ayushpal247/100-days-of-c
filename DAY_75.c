#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100], text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // consume leftover newline

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
