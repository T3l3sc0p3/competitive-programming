def specialPolynomial(x,n):
    i = 0; s = 0
    while s < n: i+=1; s+=x**i
    return i-1