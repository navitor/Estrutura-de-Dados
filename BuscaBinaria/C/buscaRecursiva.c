#include <stdio.h>

int buscaBinariaRecursiva(int lista[], int target, int inicio, int fim) {
    if (inicio > fim) {
        return -1; // Retorna -1 para indicar que o elemento não foi encontrado
    }

    int mid = (inicio + fim) / 2;

    if (lista[mid] == target) {
        return mid;
    } else if (lista[mid] > target) {
        return buscaBinariaRecursiva(lista, target, inicio, mid - 1);
    } else {
        return buscaBinariaRecursiva(lista, target, mid + 1, fim);
    }
}