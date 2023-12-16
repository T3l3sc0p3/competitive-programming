if __name__ == '__main__':
    lst = []
    for i in range(int(input())):
        line = input().split()
        command = line.pop(0)
        if command == "print":
            print(lst)
        elif line:
            if command == "insert":
                eval("lst.{}({},{})".format(command, line[0], line[1]))
            else:
                eval("lst.{}({})".format(command, line[0]))
        else:
            eval("lst.{}()".format(command))