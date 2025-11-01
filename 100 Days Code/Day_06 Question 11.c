//WAP TO INPUT AN INTEGER AND CHECK WHETHER IT IS EVEN OR ODD USINF IF - ELSE..

#include<stdio.h>
int main ()
{
	int x ;
	printf("Enter the value of an integer : ");
	scanf("%d", &x);
	
	
	if( x % 2 ==0)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
	return 0;
}
