#include <stdio.h>

int main() {

    int hour;
    int minute;

    printf("Enter the no. of hours: ");
    scanf("%d", &hour);

    minute = hour * 60;

    printf("\n%d hours is equal to %d minutes\n", hour, minute);

    system("pause");
    return 0;
}