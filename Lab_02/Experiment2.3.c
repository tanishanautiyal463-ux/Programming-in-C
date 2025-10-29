//2.3 WRITE A c PROGRAM TO CALCULAET COMPOUND INTREST

#include<stdio.h>
int main ()
{
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\n Course - BCA\n Batch - 06\n");
	printf("--------------------------------------------------\n");
	
	
	// C= p*(1+r/100)^t
	
	float compoundIntrest, principle, rate, time ;
	printf("Principle Intrest is: ");
	scanf("%f", &principle);
	
	printf("The rate of intrest per year is: ");
	scanf("%f", &rate);
	
	printf("The time taken per year is: ");
	scanf("%f", &time);
	
	compoundIntrest = principle* pow((1+rate/100),time) - principle;
	printf("The compound intrest is: %f", compoundIntrest);
	return 0;
}
