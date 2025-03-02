#include <stdio.h>

int main(){

    int program;
    int a,b,c,res,ans;
    int age, IPA, input, hour, min, sec;
    char gen;
    int quit;
    
    do {
    do {
    do {

        printf("\nChoose the program that you want to run (1 For Smiley, 2 For Plato, 3 For Seconds, 4 For Exit): ");
        scanf("%d",&program);

        if (program == 1) {

            printf("Pls enter your 3 Numbers: ");
            scanf("%d %d %d",&a, &b, &c);
            res = (a+b+c)*2;
            printf("Twice the sum of your numbers %d %d %d is %d :) :) :)\n",a,b,c,res); 
            
             
        } else if (program == 2) {

            printf("Enter your age: ");
            scanf("%d", &age);
            printf("Enter your gender ('M' or 'm' for male, 'F' or 'f' for female: ");
            scanf("%s", &gen);

                if (gen == 'm' || gen == 'M') {
                    IPA = age / 2 + 7;
                    printf("Your ideal partner's age is %d\n", IPA);
                } else  if (gen == 'f' || gen == 'F') {
                    IPA = (age - 7) * 2;
                    printf("Your ideal partner's age is %d\n", IPA);
                } else {
                    printf("Invalid Gender! \n");
                }
               
        } else if (program == 3) {

            printf("Pls enter how many seconds you want to be converted: ");
            scanf("%d",&input);
            hour = input / 3600;
            min = (input % 3600) / 60;
            sec = input % 60;

            printf("The result is: \n second: %d \n minute: %d \n hour: %d \n",sec,min,hour);
        
        } else if (program == 4) {
            printf("Do you really want to exit the program? (1 for Y and 2 for N): ");
            scanf("%d", &quit);
            
            if (quit == 1) {
                printf("Program Exited!");
            return 1;
            } else if (quit == 2) {
                
            } else {
            printf("Invalid Input!\n");
            }
            
        } else {
            printf("Invalid Input!\n");
        }

        printf("Do you want to go to another program? (1 for Y and 2 for N): ");
        scanf("%d",&ans);
    } while (ans == 1);
    
    if (ans == 2); {
    printf("Do you really want to exit the program? (1 for Y and 2 for N): ");
    scanf("%d", &quit);
    } 
    
    } while (quit == 2);       
    
    if (quit > 2) {
        printf("Invalid Input!\n");
    }
    
    } while (quit > 2);
    
    printf("Program Exited!");
    
        return 0;
}