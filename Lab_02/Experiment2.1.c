//2.1 WRITE A C PROGRAM TO CALCULATE THE AREA AND PERIMETER OF RECTANGLE ON ITS LENGTH AND WIDTH..

#include <stdio.h>
int main ()
{
	printf("Name - Tanisha Nautiyal\n SAP ID -590027792\n Course - BCA\n Batch - 06\n");
	printf("-----------------------------------------\n");
	
	int length ;
	printf("Enter the Length of Rectangle: ");
	scanf("%d", &length);
	
	int width;
	printf("Enter the Width of Rectangle: ");
	scanf("%d", &width);
	
	int area;
	area = length*width;
	printf("The Area of Rectangle is : %d\n", area);
	
	int perimeter;
	perimeter = 2*(length+width);
	printf("The Perimeter of Rectangle is : %d\n",perimeter);
	return 0;
}

