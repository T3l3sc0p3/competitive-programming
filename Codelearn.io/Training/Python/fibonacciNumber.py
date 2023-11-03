def fibonacciNumber(n):
    a = 0; b = 1; c = 0
    if n == 0: return 0
    elif n <= 2: return 1
    for i in range(1,n+1):
        a = b; b = c; c = (a + b) % 1000000007
    return c