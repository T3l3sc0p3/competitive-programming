def missingNumber(arr):
    m = len(arr)+1
    ap = (m*(1+m))/2
    return ap-sum(arr)
