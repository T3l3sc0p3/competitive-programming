a,b = [int(i) for i in input().split()]
lst = [str(i) for i in range(b-1,a,-1) if i % 3 == 0]
print(' '.join(lst) if lst else "NOT FOUND")