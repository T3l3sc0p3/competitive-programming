def compareSumOfDigits(input):
    return sum(-int(i) if int(i) % 2 == 0 else int(i) for i in input)
