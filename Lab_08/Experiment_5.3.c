/*5.3. Declare variables within different code blocks (enclosed by curly braces) and test their  accessibility within and outside those blocks.*/

#include <stdio.h>

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - B6\n");
    printf("--------------------------------\n");
    
    int x = 10; // Variable declared in main() block
    printf("Value of x in main = %d\n", x);

    {  
        int y = 20;  
        printf("Value of x in inner block : ""%d\n", x);
        printf("Value of y in inner block : %d\n", y);
    } 

    {  
        int z = 30;
        printf("Value of z in new block : %d\n", z);
        
    } 
    return 0;
}
