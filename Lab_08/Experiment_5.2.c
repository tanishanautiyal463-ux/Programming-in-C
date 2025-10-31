/*5.2. Declare a local variable inside a function and try to access it outside the function. 
Compare this with accessing the global variable from within the function.*/

#include <stdio.h>

int globalVar = 10;

void myFunction() {
    int localVar = 5;  

    printf("Inside myFunction():\n");
    printf("Global variable = %d\n", globalVar);  
    printf("Local variable = %d\n", localVar);    
}

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - B6\n");
    printf("--------------------------------\n");
    
    myFunction ();
    printf("Inside main():\n");
    printf("Global variable = %d\n", globalVar); 
	
	return 0;
}
