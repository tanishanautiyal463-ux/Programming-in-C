//COUNT POSITIVE , NEGATIVE AND ZERO ELEMENTS OF AN ARRAY

#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Number of positive elements = %d\n", positive);
    printf("Number of negative elements = %d\n", negative);
    printf("Number of zeros = %d\n", zero);
    
    return 0;
}
