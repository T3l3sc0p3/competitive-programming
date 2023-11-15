calc = [i for i in input().split()]
if calc[1] == '+': print(f"{float(calc[0])+float(calc[2]):.2f}")
if calc[1] == '-': print(f"{float(calc[0])-float(calc[2]):.2f}")
if calc[1] == '*': print(f"{float(calc[0])*float(calc[2]):.2f}")
if calc[1] == '/':
    if float(calc[2]) == 0: print("Math Error")
    else: print(f"{float(calc[0])/float(calc[2]):.2f}")