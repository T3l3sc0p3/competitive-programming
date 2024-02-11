a = set(map(int,input().split()))
c = True
for i in range(int(input())):
    if not set(map(int,input().split())).issubset(a):
        c = False
        break
print(c)