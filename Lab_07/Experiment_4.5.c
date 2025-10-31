/*4.5.Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit. 
Example of Ramanujan number: 1729 12^3 + 1^3 and 10^3 + 9^3. for a number =20(that is limit)*/

#include <stdio.h>
int main()
{
    printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\nCourse - BCA\nBatch - B6\n");
    printf("\n-----------\n\n");

    int a, b, L, num;
    
    printf("Enter the limit L: ");
    scanf("%d", &L);
    
    for (num = 1; num <= L; num++) 
    {
        int count = 0; 
        int pairs[4]; 

        for (a = 1; a * a * a < num; a++) 
        {
            for (b = a; b * b * b < num; b++) 
            {
                if ((a * a * a) + (b * b * b) == num) 
                {
                    if (count < 4) 
                    {
                        pairs[count] = a;
                        pairs[count + 1] = b;
                    }
                    count++;
                }
            }
        }
        if (count >= 2) 
        {
            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                num,
                pairs[0], pairs[1], // First pair (a, b)
                pairs[2], pairs[3]  // Second pair (c, d)
            );
        }
    }
    return 0;
}

