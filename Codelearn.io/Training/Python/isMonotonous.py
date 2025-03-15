def isMonotonous(sequence):
    if len(sequence) == 1:
        return True
    elif sequence[0] == sequence[-1]:
        return False
    tmp = sorted(sequence)
    return tmp == sequence or sorted(sequence, reverse=1) == sequence
