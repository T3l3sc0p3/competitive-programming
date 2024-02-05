input()
s = set(map(int, input().split()))
for i in range(int(input())):
    cmd = input().split()
    s.pop() if cmd[0] == "pop" else getattr(s, cmd[0])(int(cmd[1]))
print(sum(s))