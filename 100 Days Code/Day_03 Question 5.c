//WRITE A PROGRAM TO CONVERT TEMPERATURE FROM CELSIUS TO FAHRENHEIT....

#include<stdio.h>
int main ()
{
	float celsius , Fahrenheit;
	
	printf("Temperature in celsius : ");
	scanf("%f", &celsius);
	
	//Celsiue to Fahrenheit        f =  (9/5 + c) + 32
	
	Fahrenheit = (9/5 + celsius) + 32 ;
	printf("Temperature in Fahrenheit is : %f\n", Fahrenheit);
	return 0;
}
