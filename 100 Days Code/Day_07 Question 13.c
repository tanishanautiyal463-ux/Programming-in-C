//WAP TO INPUT A YEAR AND CHECK WHETHER IT IA A LEAP YEAR OR NOT USING CONDITIONAL STATEMENT..

#include<stdio.h>
int main ()
{
	int Year ;
	printf("Enter Year : ");
	scanf("%d", &Year);
	
	if( Year %4==0 && Year %100!=0 )
	{
		printf("Leap Year\n", Year);
	}
	else 
	{
		printf("Not a Leap Year", Year);
	}
	return 0;
}
