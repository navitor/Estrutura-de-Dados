#include <stdio.h>
#include <stdbool.h>

/*

Sublista Ordenada: É a porção do array que vai desde o índice 0 até i-1
(Inclusive) após cada iteração do loop externo.

Sublista Não Ordenada: É a porção do array que vai desde o índice i até n-1
(Inclusive) após cada interação do loop externo.

*/

void selectionSort(int arr[], int n){
    for(int i= 0; i < n-1; i++){
        int min_idx = 1;
        for(int j = i+1; j <n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if (min_idx != i){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

}


int main() {

    int vet[] = {2,1,4,3};
    int t = sizeof(vet) / sizeof(vet[0]);

    for (int i = 0; i < t; i++) {
        printf("vet[%d]: %d\n", i, vet[i]);
    }

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-\n");

    selectionSort(vet, t);

    for (int i = 0; i < t; i++) {
        printf("vet[%d]: %d\n", i, vet[i]);
    }

    return 0;
}