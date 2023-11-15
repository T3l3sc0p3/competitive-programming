year = int(input())
if year <= 0 or year > 100000: print("INVALID")
else: print("YES" if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0) else "NO")