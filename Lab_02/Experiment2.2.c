//2.2 WRITE A C PROGRAM TO CONVERT TEMPERATURE FROM CELSIUS TO FAHRENHEIT 

#include<stdio.h>
int main ()
{
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\n Course - BCA\n Batch - 06\n");
	printf("------------------------------------------\n");
	
	float celsius;
	printf("Enter the Temperature in Celsius:");
	scanf("%f", &celsius);
	
	// F = (C*9/5)+32
	
	float fahrenheit;
	fahrenheit = (celsius*9/5)+32;
	printf("Temperature in fahrenheit is: %f", fahrenheit);
	return 0;
}
