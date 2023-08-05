if __name__ == '__main__':
    n = int(input())
    print("Weird" if n % 2 != 0 or n > 5 and n < 21 else "Not Weird")