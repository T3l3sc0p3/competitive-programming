def calculateElectricBill(n):
    money = 1000
    if n > 50: money+=230*50;n-=50
    else: return money+n*230
    if n > 50: money+=480*50;n-=50
    else: return money+n*480
    if n > 49: money+=700*49;n-=49
    else: return money+n*700
    return money+n*900