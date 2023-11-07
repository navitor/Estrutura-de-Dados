#include <stdio.h>

int buscaLinear(int lista[], int tamanho, int alvo) {
    int index = 0;
    while (index < tamanho) {
        if (lista[index] == alvo) {
            return index;
        }
        index++;
    }
    return -1;
}