input(); tmp = a = [int(i) for i in input().split()]
print(a[0], ' '.join(str(i) for i in sorted(tmp[1:-1])), a[-1])