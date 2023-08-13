# I solve this problem using recursion, but there are more ways to solve this problem such as: return(((n+1)//2)**2)
def sumOdd(n):
    if n == 0: return 0
    if n % 2 != 0: return n + sumOdd(n-1)
    return sumOdd(n-1)
