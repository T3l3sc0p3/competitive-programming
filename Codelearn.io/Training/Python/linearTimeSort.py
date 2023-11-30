# Counting sort
def linearTimeSort(arr):
    m = max(arr)
    count_array = [0] * (m + 1)
    for num in arr: count_array[num] += 1
    for i in range(1, m + 1):
        count_array[i] += count_array[i - 1]
    new_arr = [0] * len(arr)
    for i in range(len(arr) - 1, -1, -1):
        new_arr[count_array[arr[i]] - 1] = arr[i]
        count_array[arr[i]] -= 1
    return new_arr