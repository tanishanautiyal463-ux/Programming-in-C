// WRITE A PROGRAM TO INPUT TWO NUMBERS AND DISPLAY THEIR SUM..

#include<stdio.h>
int main ()
{
	int x , y;
	printf("Enter the value of x : ");
	scanf("%d", &x);
	printf("Enter the value of y : ");
	scanf("%d", &y);
	
	int sum; 
	sum = x + y;
	printf("Sum of two number is : %d", sum);
	return 0;
}
