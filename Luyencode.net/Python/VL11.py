from math import isqrt
def isPrime(n):
    if n < 2: return False
    for i in range(2,isqrt(n)+1):
        if n % i == 0: return False
    return True
print("YES" if isPrime(int(input())) else "NO")