#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter marks: ");
    scanf("%d", &ptr->marks);

    printf("\nModified Data: Name: %s | Roll: %d | Marks: %d\n", 
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
