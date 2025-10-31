/*6.3. WAP to read a list of integers and store it in a single dimensional array.Write a C program to find the frequency of a particular 
number in a list of integers.*/

#include <stdio.h>
int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - 06\n");
	printf("----------------------------\n");
	
    int n, i, num, count = 0;

    printf("Enter the number of integers : ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    // Count frequency
    for(i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }

    printf("\nThe frequency of %d is: %d\n", num, count);
	return 0;
}
