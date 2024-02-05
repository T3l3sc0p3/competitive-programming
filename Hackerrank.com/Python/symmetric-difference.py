_, m, _, n = [set(map(int, input().split())) for _ in range(4)]
print('\n'.join(str(i) for i in sorted(n.difference(m) | m.difference(n))))