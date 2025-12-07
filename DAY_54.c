#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int x = 1; x <= n; x++) {
        int left = x * (x + 1) / 2;
        int right = (n * (n + 1) / 2) - (x - 1) * x / 2;

        if(left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
