//PATTERN

#include <stdio.h>

int main() {
    int i, j;

    // Upper half (1, 3, 5, 7, 9)
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (7, 5, 3, 1)
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
