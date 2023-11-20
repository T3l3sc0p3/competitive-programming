def loveA(s):
    t = len(s)
    c = s.count('a')
    if c>t-c: return t
    else: return c*2-1