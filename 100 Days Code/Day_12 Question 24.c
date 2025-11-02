

#include<stdio.h>
int main ()
{
	int units;
	int bill = 0;
	printf("Enter the units consumed : ");
	scanf("5d", &units);
	
	if(units <= 100) 
	{
		bill = 100 * 5;
		printf("Bill = %d rupees/unit\n");
	}
	else if ( units <= 200)
	{
		bill = ( 100*5) + ((units - 100) * 7);
	}
	else if ( units <= 300)
	{
		bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
	}
	else
	{
		bill = (100*5) + (100*7) + (100*10) + ((units - 300) * 12);
	}
	printf("Total Electricity Bill = %.2d rupees\n", bill);
}
