#include <stdio.h>

int max(int *num1, int *num2);
int main()
    {
    int a, b;
    
    printf("1st number: ");
    scanf("%d", &a);
    printf("2nd number: ");
    scanf("%d", &b);
    
    printf("Receiving the result of max function\n");
    max(&a, &b);
    return 0;
    }

int max(int *num1, int *num2) {
    int result;
    if (*num1 > *num2) {
        result = *num1;
        printf("%d", result);
    }
    else {
        result = *num2;
        printf("%d", result);
    }
    return result;
}