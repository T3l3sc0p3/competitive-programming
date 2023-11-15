def makeTriangle(a,b,c):
    n = 0; lst = sorted([a,b,c])
    while lst[0] + lst[1] <= lst[2]: lst[0]+=1; n+=1
    return n