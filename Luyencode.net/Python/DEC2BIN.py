def dec2bin(n):
    b = ""
    while n:
        b += "1" if (n & 1) else "0"
        n >>= 1
    return b

t = int(input())
while t:
    print(dec2bin(int(input()))[::-1])
    t-=1