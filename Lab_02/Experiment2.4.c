
/*Experiment 2:operators
4.write the c program to find the root of the quadratic equations sqrt*/
# include<stdio.h>
# include<math.h>
int main()
{
	printf("Name-Tanisha Nautiyal\nSAP ID-590027792\nCourse-BCA\nBatch-B6");
    printf("\n----------------------------------\n");
    
	double a,b,c,x1,x2;
	printf("Enter values of a,b,c: ");
	scanf("%lf %lf %lf",&a, &b, &c);
	double t1 = ((b*b) - (4*a*c));
	double s = sqrt(t1);
	x1 = (-b+s)/(2*a);
	x2 = (-b-s)/(2*a);
	printf("Root1: %lf\n", x1);
	printf("Root2: %lf", x2);
	return 0;
	
}
