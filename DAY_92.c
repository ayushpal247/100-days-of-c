#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\nAll Student Details:\n");
    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", students[i].name, students[i]
