def riverCrossing(n,k):
    if k<=1 and n>k: return -1
    n-=1; k-=1
    if n<=k: return 1
    return math.ceil(n/k)*2-1