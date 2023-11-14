from math import sqrt
n = int(input())
if n < 0: print("NO")
else:
    i = int(sqrt(n))
    print("YES" if i * i == n else "NO")