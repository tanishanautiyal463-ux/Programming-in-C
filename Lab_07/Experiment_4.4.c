/*Experiment 4: Loops 
4.4. The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years.Write a 
program to determine the population at the end of each year in the last decade.*/

#include <stdio.h>

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - 06\n");
	printf("--------------------------\n");
    float population = 100000; 
    float rate = 0.10;          
    int years = 10;
    int i;

    printf("Year\tPopulation\n");
    printf("-------------------\n");

    for ( i = 1; i <= years; i++) {
        population = population + (population * rate);  
        printf("%d\t%.0f\n", i, population);
    }
    return 0;
}
