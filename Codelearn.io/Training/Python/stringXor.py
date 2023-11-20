def stringXor(s,t):
    return ''.join(str(int(s[i]) ^ int(t[i])) for i in range(len(s)))