// WRITE A PROGRAM TO FIND AND DISPLAY THE SUM OF FIRST 'N' NATURAL NUMBERS...

#include<stdio.h>
int main ()
{
	int n, i, sum = 0 ;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	for( i = 1 ; i<=n ; i++)
	{
		sum = sum + i;
	}
	printf("sum = %d\n", sum);
	return 0;
}
