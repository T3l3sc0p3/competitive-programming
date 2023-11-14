def maxKnight(n):
    if n&1: return n*n//2 + 1
    return n*(n//2) if n!=2 else 4