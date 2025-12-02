#include <stdio.h>

int main() {
    int n1, n2, i, j;

    // First array size
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Second array size
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merged array size = n1 + n2
    int merged[n1 + n2];

    // Copy arr1 elements
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 elements after arr1
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

