#include <stdio.h>
#include <stdbool.h>

void bubbleSort_verif(int arr[], int n) {
    bool trocou; // variável para rastrear trocas em uma passagem

    for (int i = 0; i < n - 1; i++) {
        trocou = false; // falso no início da passagem
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                // Trocar arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = true;
            }
        // troca ocorreu na passagem, se não, a lista já está ordenada
        if (!trocou) {
            break;
        }
        }
    }
}

void bubbleSort_decrescente(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) { // Modificação para ordem decrescente
                // Trocar arr[j] e arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    int vet[] = {5, 7, 8, 16, 7, 3, 10, 62, 14};
    int t = sizeof(vet) / sizeof(vet[0]);

    for (int i = 0; i < t; i++) {
        printf("vet[%d]: %d\n", i, vet[i]);
    }

    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-\n");

    bubbleSort(vet, t);

    for (int i = 0; i < t; i++) {
        printf("vet[%d]: %d\n", i, vet[i]);
    }

    return 0;
}
