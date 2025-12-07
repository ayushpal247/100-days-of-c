#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student students[], int n) {
    struct Student topper = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper.marks) {
            topper = students[i];
        }
    }
    return topper;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
    }

    struct Student topper = findTopper(students, n);

    printf("\nTop Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
