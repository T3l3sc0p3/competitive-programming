a,b = input().split()
print(' '.join(chr(i).upper() for i in range(ord(a), ord(b) + 1)))