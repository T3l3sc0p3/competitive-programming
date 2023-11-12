def secondBiggest(n,a):
    a = list(set(a)); a.sort()
    return a[len(a)-2]