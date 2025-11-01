//WAP TO  THE AREA  AND PERIMETER OF A RECTANGLE GIVEN ITS LENGTH AND BREADTH 

#include<stdio.h>
int main ()
{
	int l , b;
	// l = length  b= breadth
	printf("Enter the length and breadth of a rectangle : ");
	scanf("%d %d", &l, &b);
	
	int perimeter , area ;
	
	perimeter = 2* (l + b);
	printf("Perimeter of a Rectangle is : %d\n", perimeter);
	
	area = l * b;
	printf("Area of Rectangle is : %d\n", area);
	
	return 0;
}
