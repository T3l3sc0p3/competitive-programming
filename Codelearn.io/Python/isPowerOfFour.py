from math import log
# Check if number is a power of 4
def isPowerOfFour(n):
    # Return False if n is not positive
    if n <= 0: return False
    return log(n,4).is_integer()