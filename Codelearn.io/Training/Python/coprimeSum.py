from math import gcd
def coprimeSum(n):
    s = 0
    for i in range(1,n+1):
        if gcd(i,n) == 1: s+=i
    return s