/*Experiment 6: Array 
6.1. WAP to read a list of integers and store it in a single dimensional array.Write a C program to print the second largest integer in a list of 
integers.*/

#include <stdio.h>

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - 06\n");
	printf("----------------------------\n");
    int n, i, largest, secondLargest;

    printf("Enter the number of integer : ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(arr[0] > arr[1]) {
        largest = arr[0];
        secondLargest = arr[1];
    } else {
        largest = arr[1];
        secondLargest = arr[0];
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("The second largest number is: %d\n", secondLargest);
    return 0;
}
