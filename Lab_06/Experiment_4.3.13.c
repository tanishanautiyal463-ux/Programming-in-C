#include<stdio.h> 
int main(){
	printf("Name - Tanisha Nautiyal \nSAP ID - 590027792 \nCourse - BCA \nBatch- B6"); 
	printf("\n----------------------------------------------------------------\n");
	int i,j,k;
	for(i=1;i<=5;i++){
	for(k=1;k<=i;k++){
	printf(" ");
	}
	for(j=5;j>=i;j--){
	printf("%d",j);
	}
	printf("\n");
	} 
} 
