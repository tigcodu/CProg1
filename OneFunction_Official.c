#include <stdio.h>

void separate(int arr[], int even[], int odd[], int size, int *evenNumbers, int *oddNumbers) {
    
    *evenNumbers = 0;
    *oddNumbers = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[(*evenNumbers)++] = arr[i];
            
        }
        else {
            odd[(*oddNumbers)++] = arr[i];
            
        }
    }
}

int main() {
    
    int size;
    
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Input %d elements in the array : \n", size);
    for (int i = 0; i < size; i++) {
        printf("Element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    int even[size], odd[size];
    int evenNumbers, oddNumbers;
    
    separate(arr, even, odd, size, &evenNumbers, &oddNumbers);
    
    printf("\nThe Even elements are :\n");
    for (int i = 0; i < evenNumbers; i++) {
        printf("%d ", even[i]);
    }
    printf("\nThe Odd elements are :\n");
    for (int i = 0; i < oddNumbers; i++) {
        printf("%d ", odd[i]);
    }
    

    return 0;
}

