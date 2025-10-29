// 1.3 : WRITE A PROGRAM TO ADD TWO NUMBERS AND ADD THE NUMBER FROM THE USER

#include<stdio.h>
int main ()
{
	printf("Name- Tanisha Nautiyal\n SAP ID- 590027792\n Course- BCA\n Batch- 06");
	printf("\n------------------------------------------------\n");
	
	int x , y ;
	printf("Enter the value of x : ");
	scanf("%d", &x);
	printf("Enter the value of y :");
	scanf("%d", &y );
	
	int sum = x + y ;
	printf("The sum of two number is : %d ", sum);
	return 0;
}
