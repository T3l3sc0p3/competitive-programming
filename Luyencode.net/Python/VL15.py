def gcd(a,b):
    if b == 0: return a
    else: return gcd(b,a%b)
a,b = [int(i) for i in input().split()]
if b == 0: print("INVALID")
elif a % b == 0: print(int(a/b))
else:
    c = abs(gcd(a,b))
    if b < 0: print(-a//c,-b//c)
    else: print(a//c,b//c)