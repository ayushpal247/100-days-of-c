#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || c == a) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
