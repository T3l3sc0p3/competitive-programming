input()
a = [int(i) for i in input().split() if int(i)&1]
print(f'{sum(a)/len(a):.4f}')