if __name__ == '__main__':
    n = int(input())
    lst = [[] for i in range(2)]
    for _ in range(n):
        lst[0].append(input())
        lst[1].append(float(input()))
    tmp = list(lst[1])
    m = min(tmp)
    while min(tmp) == m: tmp.remove(min(tmp))
    new_min = min(tmp)
    name = []
    for i in range(n):
        if new_min == lst[1][i]: name.append(lst[0][i])
    name = sorted(name)
    for i in name: print(i)