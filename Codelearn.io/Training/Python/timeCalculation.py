def timeCalculation(s):
    m = s // 60
    h = m // 60
    return '{:02d}:{:02d}:{:02d}'.format(h, m % 60, s % 60)