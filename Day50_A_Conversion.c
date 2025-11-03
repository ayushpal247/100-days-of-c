#include <stdio.h>
#include <string.h>

int main() {
    char date[20], newDate[30];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';  

    char day[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    sprintf(newDate, "%s-Apr-%s", day, year);

    printf("Formatted date: %s\n", newDate);
    return 0;
}
