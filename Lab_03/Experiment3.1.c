// 3.1 WRITE A C PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

#include<stdio.h>
int main ()
{
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\n Course - BCA\n Batch - 06");
	printf("\n----------------------------\n");
	
	int x ;
	printf("Enter the number: ");
	scanf("%d", &x);
	
	if(x%2 ==0)
	printf("The Number is even");
	else
	printf("The Number is odd");
	return 0;
}
