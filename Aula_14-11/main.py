from hash1 import *

key = ["apple", "banana", "orange", "dog", "cat"]
  

for k in key:
    print(f"Hash de {k}: {stringHash(k, len(key))}")