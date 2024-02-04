input()
a = set(int(i) for i in input().split())
a.remove(max(a))
print(max(a) if a else "NOT FOUND")