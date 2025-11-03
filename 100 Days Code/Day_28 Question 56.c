//READ AND PRINT ELEMENTS OF ARRAY

#include <stdio.h>

int main() {
    int arr[100];   // declare an array of size 100
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("The elements of the array are:");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
