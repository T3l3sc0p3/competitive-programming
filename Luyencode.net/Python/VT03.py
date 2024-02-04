n = int(input())
a = [int(i) for i in input().split()]
m = max(a)
print(max(i for i in range(n) if a[i] == m))