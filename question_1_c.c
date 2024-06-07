#include <stdio.h>

#define MONTHS_IN_SEMESTER 4
#define DAYS_IN_MONTH 35 // Assuming 35 days in each month as we need matrix of 5 X 7
#define DAYS_IN_WEEK 7

int main() {
    // Array to store the months for the next semester
    int semesterMonths[MONTHS_IN_SEMESTER][DAYS_IN_MONTH];

    // Fill up the array
    for (int month = 0; month < MONTHS_IN_SEMESTER; month++) {
        for (int day = 0; day < DAYS_IN_MONTH; day++) {
            // Assuming the semester starts from July
            // Sunday is represented by 0 and Tuesday is represented by 2
            if (day % 7 == 0 || day % 7 == 2) {
                semesterMonths[month][day] = 5; // Sundays and Tuesdays
            } else {
                semesterMonths[month][day] = 0; // Other days
            }
        }
    }

    // Print the array to check the values
    printf("Semester Months Array:\n");
    for (int month = 0; month < MONTHS_IN_SEMESTER; month++) {
        printf("Month %d:\n", month + 1);
        for (int day = 0; day < DAYS_IN_MONTH; day++) {
            printf("%d ", semesterMonths[month][day]);
            if ((day + 1) % DAYS_IN_WEEK == 0) { // Print a newline after every week
                printf("\n");
            }
        }
        printf("\n"); // Separate months with a newline
    }

    return 0;
}
