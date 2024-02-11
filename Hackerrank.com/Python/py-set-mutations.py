_ = input; _()
a = set(map(int, _().split()))
for i in range(int(_())):
    getattr(a, _().split()[0])(set(map(int, _().split())))
print(sum(a))