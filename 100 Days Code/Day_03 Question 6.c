//WAP TO SWAP TWO NUMBERS USING THIRD VARIABLE....

#include<stdio.h>
int main ()
{
	int x , y , z ;
	printf("Enter the First Number: ");
	scanf("%d", &x);
	
	printf("Enter Second Number : ");
	scanf("%d", &y);
	
	z = x;
	x = y;
	y = z;
	
	printf("\nAfter swapping\n");
	printf("First number : %d\n", x);
	printf("Second Number : %d\n", y);
	
	return 0;	
}
