def factorial(n):
    s = 1
    for i in range(1,n+1): s *= i
    return s
n,k = [int(i) for i in input().split()]
print(factorial(n)//(factorial(k)*factorial(n-k)))