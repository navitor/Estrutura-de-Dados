
def buscaBinaria(lista, target):
    inicio = 0
    end = len(lista) -1

    #euqnauto o inicio não ultrapassar o fim.
    while inicio <= end:
        #Encontrar meio da lista
        mid = (inicio + end) // 2
        
        #Se o alvo for encontrado, retorna o indicio
        if lista[mid] == target:
            return mid

        #Se o alvo for menor que o elemento meio, ignora a metade superior
        elif lista[mid] > target:
            end = mid -1

        #Se o alvo for maior que o elemento meio, ignora a metade inferior
        else:
            inicio = mid + 1
    
    return None
