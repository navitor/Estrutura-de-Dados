
def buscaBinariaRecursiva(lista, target, inicio, fim):
    if inicio > fim:
        return None
    
    mid = (inicio + fim) // 2
    
    if lista[mid] == target:
        return mid
    
    elif lista[mid] > target:
        return buscaBinariaRecursiva(lista, target, inicio, mid-1)
    
    else:
        return buscaBinariaRecursiva(lista, target, mid +1,fim)