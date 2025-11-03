#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    char surname[100];
    int i = 0, j = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  

    printf("Formatted name: ");

    if (isalpha(name[0]))
        printf("%c.", toupper(name[0]));

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i + 1] != '\0') {
            
            int k = i, spaceFound = 0;
            while (name[k] != '\0') {
                if (name[k] == ' ') {
                    spaceFound = 1;
                    break;
                }
                k++;
            }

            if (spaceFound)
                printf("%c.", toupper(name[i]));
            else {
                
                while (name[i] != '\0') {
                    surname[j++] = name[i++];
                }
                surname[j] = '\0';
                break;
            }
        }
    }

    printf("%s\n", surname);
    return 0;
}
