#include <stdio.h>

int main() {
    int idealAge;
    int manAge;

    printf("Please enter your age: ");
    scanf("%d", &manAge);

    idealAge = manAge / 2 + 7;

    printf("\nThe ideal age of a man is %d\n", idealAge);

    return 0;
}