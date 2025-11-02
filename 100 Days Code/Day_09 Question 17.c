// WAP TO FIND THE ROOTS OF THE QUADRATIC EQUATION AND CATEGORIES THEM....

#include<stdio.h>
int main()
{
    int a,b,c,d,squart();
    float root1,root2,real,imgery;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);     //root 1

        root2=(-b-sqrt(d))/(2*a);     //root 2
        printf("Roots are real and distinct.\n");
        printf("Root1=%.2f and Root2=%.2f",root1,root2);
    }
    else if(d==0)
    {
        root1=root2=-b/(2*a);
        printf("Roots are real and equal.\n");
        printf("Root1=Root2=%.2f",root1);
    }
    else
    {
        real=-b/(2*a);
        imgery=sqrt(-d)/(2*a);
        printf("Roots are Imaginary.\n");
        printf("Root1=%.2f+%.2fi and Root2=%.2f-%.2fi",real,imgery);
    }
}
