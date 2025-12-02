#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0};   // Frequency of digits 0-9
    int max = 0, mostFreqDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // If number is negative, make it positive
    if(num < 0)
        num = -num;

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Digit that occurs the most times: %d\n", mostFreqDigit);
    printf("It occurs %d times.\n", max);

    return 0;
}
