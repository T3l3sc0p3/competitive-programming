def print_full_name(first, last):
    # I use .format() function to solve this problem but you can also do like this:
    # print("Hello",first,last+'!',"You just delved into python.")
    print("Hello {0} {1}! You just delved into python.".format(first,last))

if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)