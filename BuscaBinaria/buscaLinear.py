def buscaLinear(lista, target):
    index= 0
    while index < len(lista):
        if lista[index] == target:
            return index
        index += 1
    return None