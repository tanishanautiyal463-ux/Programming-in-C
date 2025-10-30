// Write a C program to print the multiplication table of the number entered by the user . It should be in the correct formatting. Num *1 = Num. 

#include <stdio.h>

int main() 
{
	
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\n Course - BCA\nBatch - 06\n");
	printf("---------------------------------\n");
	 
	 int num, i;

    printf("Enter the number to print its multiplication : ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
