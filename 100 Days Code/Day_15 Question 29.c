//WAP TO CALCULATE THE FACTORAL OF A NUMBER

#include<stdio.h>
int main()
{
	int n , i;
	unsigned long long factorial = 1;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	if(n<0) {
		printf("Factorial is not defined.\n");
	}
	else
	for (i = 1; i <= n; i++)
	factorial *= i;
	{
		printf("Factorial of number %d is : %llu\n", n , factorial);
	}
	return 0;
	
}
