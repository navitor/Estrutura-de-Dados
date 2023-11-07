from buscaBinaria import *
from buscaRecursiva import *
from buscaLinear import *
import time  
import random


#lista = [1, 3, 5, 7, 11, 17, 19]

#target = 3

# Busca Binaria
"""
index = buscaBinaria(lista_rand, target)

if index is not None:
    print(f"Item {target} encontrado no indice {index}")

else:
    print(f"Elemento {target} não encontrado...")
"""

# print("+=+=+=+=+=+= '- Trocando Busca -' =+=+=+=+=+=+=")

# Busca Binaria Recursiva
"""
#target = 3

index = buscaBinariaRecursiva(lista_rand, target, 0, len(lista_rand)-1)

if index is not None:
    print(f"Item {target} encontrado no indice {index}")

else:
    print(f"Elemento {target} não encontrado...")
"""
lista_rand = [random.randint(0,100000) for _ in range(100000)]

lista_rand.sort()

target = 90000

print("+=+=+=+=+=+= '- Busca Binaria -' =+=+=+=+=+=+=")

inicio = time.time() *1000
index = buscaBinaria(lista_rand, target)
fim = time.time() *1000
tt= fim - inicio

if index is not None:
    print(f"Item {target} encontrado no indice {index}, Tempo de exec: {tt}")

else:
    print(f"Elemento {target} não encontrado... , Tempo de exec: {tt}")

print("+=+=+=+=+=+= '- Trocando Busca para BinariaRecursiva -' =+=+=+=+=+=+=")

inicio = time.time() *1000
index = buscaBinariaRecursiva(lista_rand, target, 0, len(lista_rand)-1)
fim = time.time() *1000
tt= fim - inicio

if index is not None:
    print(f"Item {target} encontrado no indice {index}, Tempo de exec: {tt}")

else:
    print(f"Elemento {target} não encontrado... , Tempo de exec: {tt}")

print("+=+=+=+=+=+= '- Trocando Busca para Linear -' =+=+=+=+=+=+=")

inicio = time.time() *1000
index = buscaLinear(lista_rand, target)
fim = time.time() *1000
tt= fim - inicio

if index is not None:
    print(f"Item {target} encontrado no indice {index}, Tempo de exec: {tt}")

else:
    print(f"Elemento {target} não encontrado... , Tempo de exec: {tt}")

