/*Experiment 5: Variable and Scope of Variable 
5.1. Declare a global variable outside all functions and use it inside various functions to understand its accessibility.*/


#include <stdio.h>
int count = 0;

void increment() {
    count++;  
    printf("Inside increment(): count = %d\n", count);
}

void reset() {
    count = 0;  
    printf("Inside reset(): count reset to %d\n", count);
}

void display() {
    printf("Inside display(): current count = %d\n", count);
}

int main() {
    printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - B6\n");
    printf("--------------------------------\n");

    printf("Initial count in main(): %d\n", count);
    
    increment();  
    increment();  
    display();    
    reset();     
    display();    
	
	return 0;
}
