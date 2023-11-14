def maxKnight(n):
    if n&1: return n*n//2 + 1 # int(n*n/2 + 0.5)
    return n*(n//2) if n!=2 else 4
# One-line solution
# def maxKnight(n): return 4 if (n==2) else(n*n+1)//2