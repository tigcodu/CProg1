#include <stdio.h>
#include "Odd-Even.c"

int main() {
    int arr_size, try;
    char name[80];

    printf("\nHello and welcome to the ODD and EVEN Program!\n");
    printf("Could you please input your name: ");
    scanf("%s", name);

    do 
    {

        do {
            printf("\nHello, %s\n", name);
            printf("Please input the number of elements to be stored in the array (only positive integers): ");
            if (scanf("%d", &arr_size) != 1 || arr_size <= 0) {
                printf("INVALID INPUT. Please enter a POSITIVE integer for the array size.\n");
                while (getchar() != '\n');
            } else {
                break;
            }
        } while (1);

        int mainArray[arr_size];
        int oddArray[arr_size];
        int evenArray[arr_size];

        printf("\nInput %d elements in the array: \n", arr_size);

        for (int i = 0; i < arr_size; i++) {
            int errorcount = 0;

            while (!errorcount) {
                printf("Element - %d : ", i);
                if (scanf("%d", &mainArray[i]) != 1) {
                    printf("INVALID INPUT. Please enter an integer.\n");
                    while (getchar() != '\n');
                } else {
                    errorcount = 1;
                }
            }
        }

        int evenCount = evenCollect(mainArray, evenArray, arr_size);
        int oddCount = oddCollect(mainArray, oddArray, arr_size);

        if (evenCount == 0)
            printf("\nThere are no EVEN values in the Array\n");
        else {
            printf("\nThe Even elements are: \n");
            for (int i = 0; i < evenCount; i++)
                printf("%d ", evenArray[i]);
        }

        printf("\n");
        if (oddCount == 0)
            printf("\nThere are no ODD values in the Array\n");
        else {
            printf("\nThe Odd elements are: \n");
            for (int i = 0; i < oddCount; i++)
                printf("%d ", oddArray[i]);
        }

        printf("\n");

        do 
        {
            printf("\nWould you like to try again? (1 = Yes, 0 = No): ");
            if (scanf("%d", &try) != 1 || try > 1 || try < 0) {
                printf("INVALID INPUT. Please input only 1 or 0.");
                while (getchar() != '\n');
            }
            
        } while (try > 1 || try < 0);

        if (try == 0){
            int exit;
            
            printf("Are you sure? (1 = Yes, 0 = No): ");
            scanf("%d", &exit);
            
            if (exit == 1){
                printf("\nThank you for using our program!!! <3 <3 <3");
                return 0;
            }
            else if (exit == 0);
                try = 1;
        }
        

    } while (try == 1);

    return 0;

    
}

