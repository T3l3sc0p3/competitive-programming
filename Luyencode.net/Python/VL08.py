a,b = [int(i) for i in input().split()]
print(sum(i for i in range(a,b+1) if i % 2 == 0))