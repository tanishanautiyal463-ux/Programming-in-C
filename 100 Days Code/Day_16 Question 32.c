// WAP TO CHECK IF A NUMBER IS PALINDROME..

#include <stdio.h>
int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;           
        reversed = reversed * 10 + remainder; 
        num = num / 10;                 
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}
