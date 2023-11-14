a,b = map(int, input().split())
if a == 0:
    if b == 0: print("WOW")
    else: print("NO")
else: print(f"{-b/a:.2f}")