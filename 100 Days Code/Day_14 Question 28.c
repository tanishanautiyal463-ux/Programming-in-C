//WAP TO PRINT THE PRODUCT OF EVEN NUMBERS FROM 1 TO N...

#include<stdio.h>
int main ()
{
	int n , i;
	unsigned long long product = 1;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	if(n<2) {
		printf("No even number from  1 to %d \n", n);
	}
	else {
		for( i = 2; i <=n; i += 2)
		{
			product *= i;
		}
		printf("Product of even number from 1 to %d = %llu\n", n ,  product);
	}
}
