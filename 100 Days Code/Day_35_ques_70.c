#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    // To handle k > n
    k = k % n;

    // Rotate using temporary array
    int temp[k];

    // Step 1: Copy last k elements into temp
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift remaining elements right
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy temp elements to the beginning
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

