t = int(input())
while t > 0:
    n, s = int(input()), input()
    f = l = -1
    for i in range(n):
        if s[i] == 'B':
            if f == -1:
                f = i
            l = i
    print(l - f + 1)
    t-=1
