#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array in-place
    int start = 0, end = n - 1;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
