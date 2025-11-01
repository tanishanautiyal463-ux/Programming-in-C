//WAP TO CALCULATE THE AREA AND CIRCUMFERENCE OF A CIRCLE GIVEN ITS RADIUS.....

#include<stdio.h>
int main ()
{
	int r;   // r = radius
	printf("Enter the value of r : ");
	scanf("%d", &r);
	
	int circumference , area ;
	 circumference = 2* 3.14 * r;  //pie = 3.14 
	 printf("Circumference to a circle : %d\n", circumference);
	 
	 area = 3.14 * r*r;
	 printf("Area of Circle is : %d\n", area);
	 
	 return 0;
}
