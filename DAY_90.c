#include <stdio.h>

int main() {
    enum Gender {MALE, FEMALE};

    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0=MALE, 1=FEMALE): ");
    int g;
    scanf("%d", &g);
    p.gender = g;

    printf("Name: %s\n", p.name);
    printf("Gender: ");
    switch(p.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        default:     printf("Unknown\n");
    }

    return 0;
}
