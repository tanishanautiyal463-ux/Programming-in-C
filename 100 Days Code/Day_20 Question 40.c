//WAP TO FIND THE 1's COMPLEMENT OF A BINARY NUMBER AND PRINT IT..

#include <stdio.h>

int main() {
    long long binary, temp;
    int digit;
    long long onesComplement = 0;
    int place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    while (temp != 0) {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            printf("Invalid binary number!\n");
            return 0;
        }
        temp /= 10;
    }

    temp = binary;

    // Calculate 1's complement
    while (temp != 0) {
        digit = temp % 10;         
        digit = (digit == 0) ? 1 : 0;  
        onesComplement = onesComplement + digit * place;
        place *= 10;                // Remove last digit
    }

    printf("1's complement of %lld is %lld\n", binary, onesComplement);
    
    return 0;
}
