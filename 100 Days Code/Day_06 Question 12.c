//WAP TO INPUT AN INTEGER AND CHECK WHETHER IT IS POSITIVE , NEGATIVE OR ZERO USING NESTED IF - ELSE

#include<stdio.h>
int main ()
{
	int x ;
	printf("Enter the value of x : ");
	scanf("%d", &x);
	
	if( x >= 0)
	{
		if( x == 0)
		printf("Number is Zero\n ");
		else
		printf("Number is Positive\n");
	}
	else {
		printf("Number is Negative\n");
	}
	return 0;
}
