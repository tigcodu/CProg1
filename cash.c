#include <stdio.h>

int main() {

    char name[80];
    int cash, oneK, fiveH, oneH, fifty, twenty, ten, five, one;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter the amount of cash in hand: ");
    scanf("%d", &cash);

    printf("\nName: %s", name);
    printf("\nCash on hand: %d", cash);

    oneK = cash / 1000;
    cash %= 1000;
    fiveH = cash / 500;
    cash %= 500;
    oneH = cash / 100;
    cash %= 100;
    fifty = cash / 50;
    cash %= 50;
    twenty = cash / 20;
    cash %= 20;
    ten = cash / 10;
    cash %= 10;
    five = cash / 5;
    cash %= 5;
    one = cash / 1;

    printf("\nDenominations: ");
    printf("\n1000 = %d", oneK);
    printf("\n500 = %d", fiveH);
    printf("\n100 = %d", oneH);
    printf("\n50 = %d", fifty);
    printf("\n20 = %d", twenty);
    printf("\n10 = %d", ten);
    printf("\n5 = %d", five);
    printf("\n1 = %d", one);

    return 0;
}