#include <stdio.h>

int main() {

    char name[80];
    int height, age, citizen, recom;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Are you a recommendee of Jedi Master Obi? (1 - yes, 0 - no): ");
    scanf("%d", &recom);

    if (recom == 1) {
        printf("\nName: %s", name);
        printf("\nStatus: Automatically Accepted!!!");
        return 0;
    }

    printf("Enter your height (in cm.): ");
    scanf("%d", &height);
    
        if (height >= 200) {

            printf("Enter your age: ");
            scanf("%d", &age);

            if (age >= 21 && age <= 25) {

                printf("Are you a citizen of the Planet Endor? (1 - citizen, 0 - not): ");
                scanf("%d", citizen);

                if (citizen == 1) {
                    printf("\nName: %s", name);
                    printf("\nStatus: Accepted");
                }
                else {
                    printf("\nName: %s", name);
                    printf("\nStatus: Denied");
                }
                return 0;
            }
            else {
                printf("\nName: %s", name);
                printf("\nStatus: Denied");
            }
            return 0;
        }
        else {
            printf("\nName: %s", name);
            printf("\nStatus: Denied");
        }
    return 0;
}