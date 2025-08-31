/*WRITE A C PROGRAM TO ADD  TWO NUMBERS AND TAKE A NUMBER FROM THE USER*/

#include <stdio.h>
int main()
{
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\n Course - BCA\n Batch - 06");
	printf("\n--------------------------------------------------\n");
	
	int x ; 
	printf("Enter the value of x : ");
	scanf("%d", &x);
	int y ;
	printf("Enter the value of y : ");
	scanf("%d", &y);
	int sum = x + y;
		printf("The sum of x and y is %d \n", sum);
	return 0;
}
