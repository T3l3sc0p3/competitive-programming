def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

def cut_cake(a, b, c):
    return gcd(a, gcd(b, c))
