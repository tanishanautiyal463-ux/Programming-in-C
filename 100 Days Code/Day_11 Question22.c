/* WAP TO FIND PROFIT OR LOSS PERCENTAGE GIVEN COST PRICE AND SELLING PRICE...*/

#include<stdio.h>
int main ()
{
	int CP , SP , profit , loss;
	printf("Enter Cost price and Selling price : ");
	scanf("%d %d", &CP , &SP );
	
	if( CP > SP)
	{
		printf("Loss\n");
	}
	else if( CP < SP)
	{
		printf("Profit\n");
	}
	else
	{
		printf("Neither profit nor loss\n");
	}
	return 0;
}
