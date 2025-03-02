#include <stdio.h>

int main() {

    char name[80];
    int hour_rate = 281;
    int hours_work; 
    float gross_pay, withholding_tax, net_pay;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your no. of working hours: ");
    scanf("%d", &hours_work);

    gross_pay = hour_rate * hours_work;
    withholding_tax = gross_pay * 0.32;
    net_pay = gross_pay - withholding_tax;

    printf("\nName: %s", name);
    printf("\nHourly rate: %d", hour_rate);
    printf("\nHours worked: %d", hours_work);
    printf("\nGross pay: %.2f", gross_pay);
    printf("\nWithholding tax: %.2f", withholding_tax);
    printf("\nNet pay: %.2f\n", net_pay);

    system("pause");
    return 0;
}