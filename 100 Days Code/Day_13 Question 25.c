//WAP TO IMPLEMENT A BASIC CALCULATOR USING SWITCH - CASE FOR + , - , * , / , % . 

#include<stdio.h>
#include<math.h>
int main ()
{
	int num1 , num2 ;
	char op ;
	int result;  // op - OPERATOR
	
	printf("Enter the operator (+, -, *, /, % ) : ");
	scanf("%c", &op);
	
	printf("Enter num1 and num2 : ");
	scanf("%d %d", &num1 , &num2 );
	
	switch(op) {
		case '+' :
			result = num1 + num2;
			printf("Result : %d\n", result);
			break ;
		case '-':
		    result = num1 - num2;
		    printf("Result : %d\n", result);
			break;
		case '*' :
		    result = num1 * num2 ;
			printf("Result : %d\n", result);
			break;
		 case '/' :
		 	if(num2 != 0)
		 	printf("Result : %2f\n", (float) num1 / num2);
		 	else
		 	printf("Error : Division of Zero is not allowed \n");
		 	break;
		case '%':
			if(num2 != 0)
			printf("Result : %d\n", num1 % num2 );
			else
			printf("Error : Module of Zero is not allowed. \n");
			break;
			
		default :
		printf("Invalid Operator\n");	
	}
	return 0;
 } 
