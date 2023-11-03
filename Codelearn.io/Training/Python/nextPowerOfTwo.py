def nextPowerOfTwo(n):
    for i in range(n):
        if pow(2,i) >= n: return pow(2,i)