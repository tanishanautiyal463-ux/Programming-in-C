/* WAP TO CLASSIFY A TRIANGLE AS EQUILATERAL , ISOCELES , OR SCALENE BASED ON ITS SIDE LENGTH.. */

#include<stdio.h>
int main ()
{
	int a , ,b , c ;
	
	printf("Enter the value of a , b, c : ");
	scanf("%d %d %d", &a , &b , &c );
	
	if( a==b && b==c )
	{
		printF("Equilateral Triangle");
		}	
	else if ( a==b && b==c && c==a )
	{
		printf("Isoceles Triangle");
	}
	else
	{
		printf("Scalene Triangle");
	}
	return 0;
}
