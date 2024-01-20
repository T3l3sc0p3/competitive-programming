def gcd(a,b):
    if b == 0: return a
    else: return gcd(b,a%b)
a,b = [int(i) for i in input().split()]
print(abs((a*b)//gcd(a,b)))