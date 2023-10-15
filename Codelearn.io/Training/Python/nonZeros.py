def remove_zeros(n):
    return int(str(n).replace('0',''))
def nonZeros(v,a):
    return "YES" if (remove_zeros(v) + remove_zeros(a) == remove_zeros(v+a)) else "NO"