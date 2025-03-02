#include <stdio.h>

int main() {
    int days_entered, days_convert, year, week;

    printf("Enter days: ");
    scanf("%d", &days_entered);

    days_convert = days_entered;
    year = days_convert / 365;
    days_convert %= 365;
    week = days_convert / 7;
    days_convert %= 7;
    

    printf("\n%d days = %d year/s, %d week/s, and %d day/s.\n", days_entered, year, week, days_convert);

    return 0;
}