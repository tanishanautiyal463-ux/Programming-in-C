#include <stdio.h>

int main() {
    int n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Shift elements left to remove element
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print updated array (size reduces by 1)
    printf("Array after deletion:\n");
    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
