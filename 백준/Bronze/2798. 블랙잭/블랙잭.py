n, ans = map(int, input().split())

card = input().split()
v = [0 for i in range(n)]

for i in range(n):
    v[i] = int(card[i])

max_ans = 0

for i in range(n):
    for j in range(i+1,n):
        for k in range(j+1, n):
            sum_card = v[i] + v[j] + v[k]
            if (i == 0 and j == 1 and k == 2):
                max_ans = sum_card
                continue
            else :
                if ((abs(ans - sum_card) < abs(ans - max_ans)) and (ans - sum_card >= 0)):
                    max_ans = sum_card

print(max_ans)