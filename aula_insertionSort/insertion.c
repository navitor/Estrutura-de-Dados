#include <stdio.h>

void insertionSort(int arr[], int n){
    int i,j, key;
    for(i= 1; i < n; i++){
        key = arr[i];
        j = i -1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
}

int main(){
    int arr[] = {6, 8, 50, 93, 39, 1, 12, -5, 0};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array Original: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Array Ordenado: \n");
    printArray(arr, n);

    return 0;
}