#include <stdio.h>

//void bubbleSort(int *arr, int n);


void bubbleSort (int arr[], int n) {

    for (int i = 0; i < n-1; i++) { 
        for (int j=0; j<n-1-i; j++) {
            if (arr[i] > arr[j+1]){
                // Trocar arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}

int main(){

    int vet[] = {5,7,8,16,7,3,10,62,14};

    int t = sizeof(vet)/sizeof(vet[0]);

    for(int i=0; i <t; i++){
        printf("vet[%d]: %d\n", i, vet[i]);
    }

    printf("\n =-=-=-=-=-=-=-=-=-=-=-=-= \n");

    bubbleSort(vet, t);

    for(int i=0; i <t; i++){
        printf("vet[%d]: %d\n", i, vet[i]);
    }


    return 0;
}