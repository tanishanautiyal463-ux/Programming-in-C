//WAP TO TAKE A NUMBER AS INPUT AND PRINT ITS EQUIVALENT BINARY REPRESENTATION.

#include <stdio.h>

int main() {
    int num;
    unsigned int mask;  

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    printf("Binary representation of %d is: ", num);

    for (mask = 1 << 31; mask > 0; mask = mask >> 1) {
        if (num & mask) {
            printf("1");
        } else if (mask <= num) {  
            printf("0");
        }
    }

    printf("\n");
    return 0;
}
