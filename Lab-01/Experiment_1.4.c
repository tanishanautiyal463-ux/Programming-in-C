//1.4 : WRITE A PROGRAM TO PERFORM FOUR ARITHMETIC OPERATIONS IN TWO VARIABLES

 #include <stdio.h>
 int main()
 {
 	printf("Name- Tanisha Nautiyal\n SAP ID- 590027792\n Course- BCA\n Batch- 06");
	printf("\n------------------------------------------------------\n");
	int a;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	int b;
	printf("Enter the value of b : ");
	scanf("%d", &b);
	int sum = a+b;
	int sub = a-b;
	int mul = a*b;
	int div = a/b;
	printf("The sum of a and b is %d \n", sum);
	printf("The subtraction of a and b is %d \n", sub);
	printf("The multiplication of a and b is %d \n", mul);
	printf("The division of a and b is %d \n", div);
	return 0;
 }

