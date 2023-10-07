def countZeroDigit(a,b):
    c = 0
    for i in range(a,b+1):
        c+=str(i).count('0')
    return c