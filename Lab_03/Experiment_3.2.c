

#include<stdio.h> 
int main ()  
{
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\n Course - BCA\n Batch - 06\n");
	printf("\n-----------------------------\n");
	
	int a, b, c ;
	printf("Enter the sides of triangle a , b , c : ");
	scanf("%d %d %d", &a, &b, &c);
	if( a + b > c && b + c > a && c + a > b)
	{
	 {
	 printf("Triangle is valid \n");
	 if ( a == b && b == c )
	 printf("It is an Equilateral Triangle\n");
	  }
	  else if (a == b || b == c|| c == a)
	  {
	    printf("Triangle is Isoceles Triangle\n");
		}
		else 
		{
		printf("Triangle is Scalene Triangle\n");
		}
		 }
		else
		 printf("Triangle is not valid");
		return 0; 
}
