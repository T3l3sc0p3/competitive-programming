def check_leap_year(y):
    return y % 400 == 0 or (y % 100 != 0 and y % 4 == 0)
month, year = map(int, input().split())
if month > 12: print("INVALID")
else:
    if month in [1, 3, 5, 7, 8, 10, 12]: day = 31
    elif month in [4, 6, 9, 11]: day = 30
    elif month == 2: day = 29 if check_leap_year(year) else 28
    print(day)