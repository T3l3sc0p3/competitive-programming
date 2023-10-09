def sumOfNumbers(arr,n):
    t = 0
    lst = []
    for i in range(1,n+1):
        for j in arr:
            if i % j == 0: lst.append(i)
    for i in set(lst): t+=i
    return t