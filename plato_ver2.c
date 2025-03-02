#include <stdio.h>

int main() {
    int realAge, idealAge;
    char gender;

    printf("Please enter your age: ");
    scanf("%d", &realAge);
    printf("Please enter your gender: ");
    scanf("%s", &gender);

        if (gender == 'm' || gender == 'M') {
            idealAge = realAge / 2 + 7;
            printf("\nYour ideal partner's age is %d\n", idealAge);
        }
        else if (gender == 'f' || gender == 'F') {
            idealAge = (realAge - 7) * 2;
            printf("\nYour ideal partner's age is %d\n", idealAge);
        }
        else {
            printf("Invalid Input\n");
        }

    return 0;
}