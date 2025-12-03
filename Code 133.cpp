#include <stdio.h>

enum Months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, 
              JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    enum Months month;
    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 
                          31, 31, 30, 31, 30, 31 };

    for (int i = JANUARY; i <= DECEMBER; i++) {
        month = (enum Months)i;
        printf("%s has %d days\n", monthNames[i], daysInMonth[i]);
    }

    return 0;
}

