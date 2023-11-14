def factorial(n):
    s = 1
    for i in range(1,n+1): s*=i
    return s
def numberOfCombinations(n,k):
    return factorial(n)//(factorial(k)*factorial(n-k))