a,b = [int(x) for x in input().split()]
print(a+b)
print(a-b)
print(a*b)
print("ERROR" if not b else "{:.2f}".format(a/b))