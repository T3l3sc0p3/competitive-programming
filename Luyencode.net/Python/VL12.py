n = abs(int(input()))
if n == 0: print("INF")
else:
    for i in range(n,0,-1):
        if n % i == 0: print(i,end=' ')