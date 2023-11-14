n = float(input())
p = int(n)
print(p if abs(abs(n) - abs(p)) < 0.5 else -(abs(p)+1) if n < 0 else p+1)