#include <stdio.h>

int main() {
    int n, key, i;

    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n+1]; // +1 for the new element

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the correct position from the end
    int pos = n - 1;
    while(pos >= 0 && arr[pos] > key) {
        arr[pos + 1] = arr[pos];   // Shift elements to the right
        pos--;
    }

    // Insert the element
    arr[pos + 1] = key;

    // Print the updated array
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
