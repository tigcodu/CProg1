#include <stdio.h>

int main() {

    char name[80];
    int a, b, c, res;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);

    res = (a + b + c) * 2;

    printf("\nName: %s", name);
    printf("\nTwice the sum of %d, %d, and %d is %d\n", a, b, c, res);

    system("pause");
    return 0;
}