import random
import time

def generate_data(size, order):
    if order == 'random':
        return random.sample(range(size * 3), size)
    elif order == 'almost_sorted':
        sorted_part = list(range(int(0.9 * size)))
        random_part = random.sample(range(size), int(0.1 * size))
        return sorted_part + random_part
    elif order == 'inverse_sorted':
        return list(range(size * 3, 0, -1))

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i+1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        merge_sort(left_half)
        merge_sort(right_half)

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Testes e medições de tempo
sizes = [100, 1000, 10000]
orders = ['random', 'almost_sorted', 'inverse_sorted']

for algorithm in [bubble_sort, selection_sort, merge_sort]:
    print(f"Algoritmo: {algorithm.__name__}")
    for size in sizes:
        for order in orders:
            data = generate_data(size, order)
            
            start_time = time.time()
            algorithm(data.copy())
            end_time = time.time()
            
            elapsed_time = end_time - start_time
            print(f"Tamanho: {size}, Ordem: {order}, Tempo: {elapsed_time} segundos")
