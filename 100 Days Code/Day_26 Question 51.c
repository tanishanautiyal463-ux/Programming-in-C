//PATERN PRINTING

#include<stdio.h>
int main ()
{
	int n;
	printf("Enter number of rows : ");
	scanf("%d", &n);
	
	int i , j;
	for(i=1; i<=n ; i++) {
		for(j=1 ; j<=n-i ; j++){
			printf(" ");
		}
		for(j=n-i+1; j<=n; j++){
			printf("%d", j);
		}
		printf("\n");
	}
}

