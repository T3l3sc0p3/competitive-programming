def factorial(n):
    s = 1
    for i in range(1,n+1): s*=i
    return s
x,n = [int(i) for i in input().split()]
print(f"{sum((x**i)/factorial(i) for i in range(1,n+1)):.2f}")