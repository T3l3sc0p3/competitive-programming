n = input()[::-1]
if n[0] != '0': print(n)
else:
    for i in range(len(n)):
        if n[i] != '0': print(n[i:]); break