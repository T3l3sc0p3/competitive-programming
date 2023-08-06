# A runner-up is a competitor or team taking second place in a contest.
if __name__ == '__main__':
    n = int(input())
    arr = set(list(map(int, input().split())))
    # Remove the maximum score (1st place) in arr, then the maximum score will be the runner-up (2nd place)
    arr.remove(max(arr))
    print(max(arr))