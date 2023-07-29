# The first solution O(nlogn)
def isSortedArray(arr):
    # Sort the arr and check if it's equal to the initial arr
    return sorted(arr) == arr or sorted(arr,reverse=True) == arr
# The second solution O(n)
def isSortedArray2(arr):
    # Incremental array case
    if arr[0] <= arr[len(arr)-1]:
        for i in range(0,len(arr)-1):
            if arr[i] > arr[i+1]: return False
    # Decremental array case
    else:
        for i in range(0,len(arr)-1):
            if arr[i] < arr[i+1]: return False
    return True