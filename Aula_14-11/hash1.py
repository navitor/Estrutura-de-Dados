def stringHash(key, s):
    h = 0
    for k in key:
        print(ord(k))
        h += ord(k)

    return h % s