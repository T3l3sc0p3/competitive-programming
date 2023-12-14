def summer(n):
    s = 0
    while n > 0:
        if n&1: s+=1
        n//=2
    return s