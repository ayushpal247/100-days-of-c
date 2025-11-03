#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;

    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = 0, mostFreqDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", mostFreqDigit, maxFreq);
    return 0;
}
