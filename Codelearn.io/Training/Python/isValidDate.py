def isValidDate(d, m, y):
    c = 1
    if y < 1: return False
    if m in [1, 3, 5, 7, 8, 10, 12]: return not (d < 1 or d > 31)
    elif m in [4, 6, 9, 11]: return not (d < 1 or d > 30)
    elif m == 2:
        if (y % 4 == 0 and y % 100 != 0) or y % 400 == 0: return not (d < 1 or d > 29)
        else: return not (d < 1 or d > 28)
    else: return False