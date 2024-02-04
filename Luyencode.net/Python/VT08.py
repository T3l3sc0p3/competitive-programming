n = int(input())
a = [int(i) for i in input().split()]
for i in range(1,n):
    if i&1:
        if i == n-1: a[i] += abs(a[i-1])
        else: a[i] += abs(a[i+1]-a[i-1])
print(' '.join(str(i) for i in a))