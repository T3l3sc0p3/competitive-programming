def fromDecimal(b,n):
    res = ''
    if n == 0: return '0'*32
    while n > 0:
        res += str(n % b)
        n //= b
    return res
def firstDiffBit(a,b):
    a2 = fromDecimal(2,a); b2 = fromDecimal(2,b)
    m = max(len(a2),len(b2))
    for i in range(m):
        try:
            if a2[i] != b2[i]: return i
        except: return i
    return -1