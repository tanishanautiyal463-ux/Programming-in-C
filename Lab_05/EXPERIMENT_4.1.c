
//	Write a program to enter numbers till the user wants. At the end, it should display the count of positive, negative, and zeroes entered.
#include<stdio.h>
int main()
{
	printf("Name - Tanisha Nautiyal\n SAP ID - 590027792\n Course - BCA\nBatch - 06\n");
	printf("---------------------------------\n");
	
	int n,cp=0,cn=0,z=0;
	char ch;
	do
	
	{
	printf("Enter a Number : ");
	scanf("%d",&n);
	if(n>0)
	{
		cp++;
	}
	else if(n<0)
	{
		cn++;
	}
	{
		z++;
	}
	printf("Do you want to enter another number (Y/y for yes N/n for no) : ");
	scanf(" %c", &ch);
	
	}
	while(ch=='Y'||ch=='y');
	printf("total positive numbers are %d\n",cp);
	printf("total negative numbers are %d\n",cn);
	printf("total zeroes are %d\n",z);

	return 0;

}
