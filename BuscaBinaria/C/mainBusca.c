#include <stdio.h>
#include </home/alunos/Área de trabalho/BuscaBinaria/C/buscaBinaria.c>
#include </home/alunos/Área de trabalho/BuscaBinaria/C/buscaRecursiva.c>
#include </home/alunos/Área de trabalho/BuscaBinaria/C/buscarLinear.c>
#include <time.h>
#include <stdlib.h>


int main(){

    srand(time(NULL));

    int tamanho = 90000000;

    int *lista = (int *)malloc(tamanho * sizeof(int));
    
    for (int i = 0; i < tamanho; i++) {
        lista[i] = rand() % 90000000;
    }

    int inicio = 0;
    int target = 7;
    int fim = sizeof(lista) / sizeof(lista[0]) - 1;

    qsort(lista, tamanho, sizeof(int), fim);

    clock_t inicio = clock();
    clock_t fim = clock();
    double tt = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("+=+=+=+=+=+= '- Busca Binaria -' =+=+=+=+=+=+=\n");

    int alvo = 90000000;
    clock_t inicio, fim;
    double tt;

    inicio = clock();
    int index = buscaBinaria(lista, tamanho, target);
    fim = clock();
    tt = (double)(fim - inicio) * 1000 / CLOCKS_PER_SEC;

    if (index != -1) {
        printf("O elemento %d foi encontrado na posição %d.\n", target, index);
    } else {
        printf("O elemento %d não foi encontrado na lista.\n", target);
    }

    printf("+=+=+=+=+=+= '- Trocando Busca para BinariaRecursiva -' =+=+=+=+=+=+=\n");

    int index1 = buscaBinariaRecursiva(lista,target, inicio, fim);

    if (index1 != -1) {
        printf("O elemento %d foi encontrado na posição %d.\n", target, index1);
    } else {
        printf("O elemento %d não foi encontrado na lista.\n", target);
    }

    printf("+=+=+=+=+=+= '- Trocando Busca para Linear -' =+=+=+=+=+=+=\n");


    inicio = clock();
    int index2 = buscaLinear(lista, tamanho, target);
    fim = clock();
    tt = (double)(fim - inicio) / CLOCKS_PER_SEC;
    
    if (index2 != -1) {
        printf("O elemento %d foi encontrado na posição %d. \n", target, index2);
    } else {
        printf("O elemento %d não foi encontrado na lista.\n", target);
    }
    
    free(lista);


    return 0;
}