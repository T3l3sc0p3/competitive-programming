def powersOfTwo(k,arr):
    for i in range(k+1):
        tmp = 2**i
        if tmp not in arr: return tmp