# There are 2 ways to solve this problem. The first is to use the loop function
def lst1(n):
    for i in range(1,n+1):
        print(i,end="")
# The second is to use recursion
def lst2(n):
    if n == 1: return '1'
    return lst2(n-1) + str(n)
if __name__ == '__main__':
    n = int(input())
    #lst1(n)
    print(lst2(n))