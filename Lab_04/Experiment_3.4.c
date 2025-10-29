// 3.4 Write a program to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include<stdio.h>
int main ()
{
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\n Course - BCA\n Batch- 06\n");
	
	int x1 , y1, x2 , y2 , x3 , y3;
	printf("Enter x1 and y1 :");
	scanf("%d %d", &x1, &y1);
	
	printf("Enter x2 and y2 :");
	scanf("%d %d", &x2, &y2);
	
	printf("Enter x3 and y3 :");
	scanf("%d %d", &x3, &y3);
	
	if((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)){
	printf("The points are collinear/n");
	}

	else
	printf("Points are not collinear ");
	return 0;
	
}
