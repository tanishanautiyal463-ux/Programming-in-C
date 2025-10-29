// 3.6 Write a program using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.

#include <stdio.h>
int main() 
{
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\n Course - BCA\n Batch- 06\n");
	
    int n, i;
    printf("Enter number of rectangles (minimum 3): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Enter at least 3 rectangles.\n");
        return 0;
    }

    int length, breadth, perimeter;
    int maxPerimeter = 0, rectIndex = 0;

    for (i = 1; i <= n; i++) {
        printf("\nRectangle %d:\n", i);
        printf("Enter the length: ");
        scanf("%d", &length);
        printf("Enter the breadth: ");
        scanf("%d", &breadth);

        perimeter = 2 * (length + breadth);

        // Use ternary operator to update max
        maxPerimeter = (perimeter > maxPerimeter) ? perimeter : maxPerimeter;
        rectIndex   = (perimeter > maxPerimeter) ? i : rectIndex;
    }

    printf("\n Highest perimeter of rectangle is Rectangle %d\n", rectIndex);
    printf("Highest Perimeter = %d\n", maxPerimeter);
    return 0;
}
