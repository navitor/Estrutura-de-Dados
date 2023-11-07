#include <stdio.h>

int buscaBinaria(int lista[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int mid = (inicio + fim) / 2;

        if (lista[mid] == alvo) {
            return mid;
        } else if (lista[mid] > alvo) {
            fim = mid - 1;
        } else {
            inicio = mid + 1;
        }
    }

    return -1;
}