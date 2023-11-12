def fromDecimal(b,n):
    res = ''
    while n >= 1:
        res += str(n % b)
        n //= b
    return res[::-1]