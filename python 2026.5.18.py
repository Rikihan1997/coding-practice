N, Q = map(int, input().split())
s = []
for i in range(1, N + 1):
    s.append(i)

for i in range(Q):
    req = input().split()
    if req[0] == "swap":
        temp = s[int(req[1]) - 1]
        s[int(req[1]) - 1] = s[int(req[2]) - 1]
        s[int(req[2]) - 1] = temp
    elif req[0] == "reverse":
        s.reverse()
    elif req[0] == "resize":
        if len(s) > int(req[1]):
            s = s[:int(req[1])]
for j in s:
    print(j)