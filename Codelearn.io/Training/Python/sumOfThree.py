def sum_of_three(s):
    # float(s): cast string s to float
    # Then return True if float(s) is divisible by 3 and False if not
    return float(s)%3==0
def sum_of_three1(s):
    # Another way to solve this challenge is use isnumeric() function
    return s.isnumeric() and int(s) % 3 == 0