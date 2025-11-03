//WAP TOSWAP TE FIRST AND LAST DIGIT OF A NUMBER..

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, temp;
    long swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;  // Extract last digit

    // Find number of digits and first digit
    digits = 0;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;  // temp now contains first digit

    // Remove first and last digits from the original number
    temp = num % (int)pow(10, digits); // Remove first digit
    temp /= 10;                         // Remove last digit

    // Construct swapped number: last + middle + first
    swappedNum = lastDigit * (long)pow(10, digits) + temp * 10 + firstDigit;

    printf("Number after swapping first and last digit: %ld\n", swappedNum);
    
    return 0;
}
