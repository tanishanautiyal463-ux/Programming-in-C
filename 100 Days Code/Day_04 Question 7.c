//WRITE A PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE

#include<stdio.h>
int main ()
{
	int x , y;
	printf("Enter the value of x and y : ");
	scanf("%d %d", &x , &y);
	
	printf("Before Swapping : x = %d , y = %d\n", x , y);
	// x = 7 , y = 3 
	x = x + y ;  // 10
	y  = x - y ; //7
	x = x - y ; // 3
	
	printf("After swapping : x = %d, y = %d\n", x , y);
	return 0;	
	
}
