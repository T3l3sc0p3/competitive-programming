def coolString(inputString):
    for i in range(len(inputString)-1):
        if not inputString[i].isalpha() or inputString[i].islower() == inputString[i+1].islower(): return False
    return True