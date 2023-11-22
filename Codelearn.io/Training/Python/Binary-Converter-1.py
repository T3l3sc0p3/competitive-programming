def text_to_binary(text):
    res = []
    for i in text:
        if i == ' ': res.append("00100000")  
        else: res.append("0" + bin(ord(i))[2:])
    return ' '.join(res)