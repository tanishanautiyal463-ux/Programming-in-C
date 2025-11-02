/* WAP TO CALCULATE LIBERARY FINE BASED ON LATE DAYS AS FOLLOWS: */

#include <stdio.h>
int main() {
    int days;
    int fine = 0;

    printf("Enter the number of days late: ");
    scanf("%d", &days);

    if (days <= 5) {
        fine = days * 2;
        printf("Fine = %d rupees\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine = %d rupees\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine = %d rupees\n", fine);
    }
    else {
        printf("Membership Cancelled.\n");
    }
    return 0;
}
