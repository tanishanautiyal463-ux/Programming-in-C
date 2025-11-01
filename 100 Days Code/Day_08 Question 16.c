//WAP TO INPUT THREE NUMBERS AND FIND THE LARGEST AMONG THEM..

#include<stdio.h>
int main ()
{
	int a, b, c;
	printf("Enter the values of a , b , c : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b) {
		if( a > c)
		printf("%d'a' is greatest \n", a);
		else {  //(c>a).b
			printf("%d 'c' is greatest \n", c);
		}
		
		}
		else //(b>a) >c
		{
			printf("%d 'b' is greatest\n", b);
		}
		return 0;
	}

