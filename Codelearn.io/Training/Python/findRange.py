def findRange(array,n):
    for i in range(len(array)):
        for j in range(i+1,len(array)+1):
            if sum(array[i:j]) == n: return True
    return False