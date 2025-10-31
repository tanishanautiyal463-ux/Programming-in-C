

#include<stdio.h> 
int main()
{
	printf("Name - Tanisha Nautiyal \nSAP ID - 590027792 \nCourse - BCA \nBatch- B6\n"); 
	printf("\n-----------------------------\n");
	int i,j,k;
	for(i=5;i>=1;i--){
	for(k=1;k<=i;k++){ // space 
	printf(" ");
	}
	for(j=5;j>=i;j--){// first uper half 
	printf("%d",j); 
	}
	for(j=i+1;j<=5;j++){// second upper half
	printf("%d",j);
	}
	printf("\n");
	}
	for(i=1;i<=5;i++){
	for(k=0;k<=i;k++){ // space
	printf(" ");
	}
	for(j=5;j>=i+1;j--){
	printf("%d",j);
	}
	for(j=i+2;j<=5;j++){//upper half
	printf("%d",j);
	}
	printf("\n");
	} 
}
