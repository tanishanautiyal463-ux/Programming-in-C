//WRITE A PROGRAM TO INPUT TWO NUMBERS AND DISPLAY THEIR SUM , DIFFERENCE , PRODUCT , AND QUOTIENT.

#include<stdio.h>
int main ()
{
	int x , y;
	printf("Enter the value of x : ");
	scanf("%d", &x);
	printf("Enter the value of y : ");
	scanf("%d", &y);
	
	int sum , difference , product , quotient; 
	sum = x + y;
	printf("Sum of two number is : %d\n", sum);
	
	difference = x - y ;
	printf("Difference of two number is : %d\n", difference);
	
	product = x * y;
	printf("Product of two number is  is : %d\n", product);
	
	quotient = x%y;
	printf("Quotient of two number is : %d\n");
	return 0;
	
}
