int evenCollect(int array[], int even[],int size){ 
    int evenCount = 0; 

    for (int i = 0; i < size; i++){                                         
        if (array[i] % 2 == 0){
            even[evenCount] = array[i]; 
            evenCount++;
        }
    }
    return evenCount;
}

int oddCollect(int array[], int odd[], int size){
    int oddCount = 0;

    for (int i = 0; i < size; i++){
        if (array[i] % 2 == 1){
            odd[oddCount] = array[i];
            oddCount++;
        }
    }
    return oddCount;
}

