//WAP TO CALCULATE SIMPLE AND COMPOUND INTREST FOR GIVEN PRINCIPLE , RATE AND TIME...

#include<stdio.h>
#include<math.h>

int main()
{
	float principle , rate , time , SI , CI , Amount;
	printf("Enter the value of principle , rate , time : ");
	scanf("%f %f %f", &principle , &rate , &time );
	// SI = P*R*T / 100
	
	SI = principle * rate * time / 100 ;
	printf("The Simple Intrest  is : %2f\n", SI);
	
	//Amount =  p * pow((1 + r/100) * time)
	Amount = principle * pow ((1 + rate / 100), time);
	//CI = AMOUNT - PRINCIPLE
	CI = Amount - principle ;
	
	printf("Compound Intrest is : %2f\n", CI);
	return 0;
}
