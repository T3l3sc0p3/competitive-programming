a = abs(int(input()))
print(sum(1 for i in range(1,a+1) if a % i == 0))