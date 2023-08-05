# Using list comprehension
def swap_case(s):
    return ''.join([i.lower() if i.isupper() else i.upper() for i in s])
# Using loop function
def swap_case1(s):
    new_str = ''
    for i in s:
        if i.isupper():new_str+=i.lower()
        else: new_str+=i.upper()
    return new_str

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)