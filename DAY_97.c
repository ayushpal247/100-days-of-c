#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData stored successfully!\n");

    // Reading back from file
    FILE *fp_read = fopen("employee.dat", "rb");
    if (fp_read == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Employee emp_read;
    fread(&emp_read, sizeof(struct Employee), 1, fp_read);
    fclose(fp_read);

    printf("\nEmployee Details Read from File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", emp_read.name, emp_read.id, emp_read.salary);

    return 0;
}
