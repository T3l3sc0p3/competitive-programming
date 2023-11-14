a,b = [int(i) for i in input().split()]
if a == 0:
    if b == 0: print("WOW")
    else: print("NO")
else: print("{:.2f}".format(-b/a))