def sumK(inputArray,n,k):
    return sum(inputArray[n:n+k])
def arrayMaxConsecutiveSum(inputArray,k):
    return max(sumK(inputArray,i,k) for i in range(len(inputArray) - k + 1) if sumK(inputArray,i,k))