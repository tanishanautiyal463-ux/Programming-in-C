/*6.2. WAP to read a list of integers and store it in a single dimensional array.Write a C program to count and 
display positive, negative, odd, and even numbers in an array.*/

#include <stdio.h>

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - 06\n");
	printf("----------------------------\n");
	
    int n, i;
    int positive = 0, negative = 0, odd = 0, even = 0;

    printf("Enter the number of integers : ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, odd, and even numbers
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nNumber of positive numbers: %d", positive);
    printf("\nNumber of negative numbers: %d", negative);
    printf("\nNumber of even numbers: %d", even);
    printf("\nNumber of odd numbers: %d\n", odd);
    
    return 0;
}
