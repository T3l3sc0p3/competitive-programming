a = [int(i) for i in input().split()]
if a[-1] in a[:-1]:
    for i in range(len(a)-1):
        if a[i] == a[-1]: print(i+1, end=" ")
else:
    print(-1)