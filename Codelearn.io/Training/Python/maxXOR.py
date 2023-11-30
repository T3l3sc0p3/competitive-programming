def maxXOR(l,r):
    m = 0
    for i in range(l,r):
        m = max(m,max(i^i, i^(i+1)))
    return m