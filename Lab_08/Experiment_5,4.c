/*5.4. Declare a static local variable inside a function. Observe how its value persists across function calls.*/ 

#include <stdio.h>
void counter() {
    static int count = 0;  
    count++;
    printf("Function called %d times \n", count);
}

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - B6\n");
    printf("--------------------------------\n");
    
    printf("Calling counter() first time:\n");
    counter();

    printf("\nCalling counter() second time:\n");
    counter();

    printf("\nCalling counter() third time:\n");
    counter();
    
    return 0;
}
