from math import sqrt
def dk06(a,b):
    if a == 0:
        if b == 0: print("WOW")
        else: print("NO")
    else: print(f"{-b/a:.2f}")
a,b,c = map(int,input().split())
if a == 0: dk06(b,c)
else:
    delta = b**2-4*a*c
    if delta > 0:
        x1 = (-b+sqrt(delta))/(2*a)
        x2 = (-b-sqrt(delta))/(2*a)
        if x1 >= x2: print(f"{x2:.2f} {x1:.2f}")
        else: print(f"{x1:.2f} {x2:.2f}")
    elif delta == 0: print(f"{-b/(2*a):.2f}")
    else: print("NO")