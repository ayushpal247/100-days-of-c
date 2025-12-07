#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter details of Student 1 (Name Roll Marks): ");
    scanf("%s %d %d", s1.name, &s1.roll_no, &s1.marks);

    printf("Enter details of Student 2 (Name Roll Marks): ");
    scanf("%s %d %d", s2.name, &s2.roll_no, &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
