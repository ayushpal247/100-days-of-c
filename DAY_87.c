#include <stdio.h>

int main() {
    enum Role {ADMIN, USER, GUEST};
    enum Role role;

    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    int val;
    scanf("%d", &val);
    role = val;

    switch(role) {
        case ADMIN: printf("Welcome Admin!\n"); break;
        case USER:  printf("Welcome User!\n"); break;
        case GUEST: printf("Welcome Guest!\n"); break;
        default:    printf("Invalid role\n");
    }

    return 0;
}
