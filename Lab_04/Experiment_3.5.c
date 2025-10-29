// 3.5 According to the gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.//

#include <stdio.h>

int main() {
	printf("Name - Tanisha Nautiyal\nSAP ID - 590027792\n Course - BCA\n Batch- 06\n");
    int year, i, days = 0;
    int dayOfWeek;
    char *daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter year: ");
    scanf("%d", &year);

    // Count total days from year 1 to (year-1)
    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
            days += 366; // Leap year
        } else {
            days += 365; // Normal year
        }
    }

    // 01/01/0001 was Monday ? index 1 in daysOfWeek[]
    dayOfWeek = (days % 7 + 1) % 7;

    printf("1st January %d is a %s\n", year, daysOfWeek[dayOfWeek]);
    return 0;
}

