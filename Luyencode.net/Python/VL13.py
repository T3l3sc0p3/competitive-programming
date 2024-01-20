n = int(input())
print("NO" if n ^ sum(i for i in range(1,n) if n % i == 0) else "YES")