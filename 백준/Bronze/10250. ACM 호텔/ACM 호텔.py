t = int(input())

for i in range(t):
    h, w, n = map(int, input().split())
    y = 1
    x = 0
    for j in range(n):
        if (x >= h):
            x = 1
            y += 1
            continue
        x += 1

    if (len(str(y)) == 1):
        print(str(x) + "0" + str(y))
    else:
        print(str(x) + str(y))