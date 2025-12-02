#include <stdio.h>

int main() {
    int n, pos, value, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for new element

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements right from the end to make space
    for(i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value
    arr[pos - 1] = value;

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
