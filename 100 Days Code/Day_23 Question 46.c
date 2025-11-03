// Printing Pattern

#include<stdio.h>
int main ()
{
	int i, j;
	
	for(i=1; i<=5; i++) {  // Rows
		for(j=1; j<=5; j++) {  // Column
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
