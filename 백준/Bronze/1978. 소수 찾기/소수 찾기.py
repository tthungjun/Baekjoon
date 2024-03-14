n = int(input())
v = [0 for i in range(n)]
cnt = 0

input_list = input().split()

for i in range(n):
    v[i] = int(input_list[i])

for i in range(n) :
    if (v[i] == 1):
        cnt += 1
        continue
    elif (v[i] == 2):
        continue
    else:
        for j in range(2,v[i]):
            if (v[i] % j == 0):
                cnt += 1
                break

print(n - cnt)