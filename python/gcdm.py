def gcdm(a,b):
    if b == 0:
        return a
    else:
        return gcdm(b, a % b)
print(gcdm(12, 8))
