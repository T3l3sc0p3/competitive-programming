def reverseString(str1):
    re = [i for i in str1 if i.isalpha()]
    return ''.join(re)[::-1]