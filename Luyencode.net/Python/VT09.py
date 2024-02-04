def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
input()
print(' '.join(str(_) for _ in sorted(set(int(i) for i in input().split() if is_prime(int(i))))))