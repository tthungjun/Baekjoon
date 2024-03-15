n, m = map(int, input().split())

a = 1
for i in range(m):
    a *= n
    n -= 1

b = 1
for i in range(m):
    a /= b
    b += 1

print(int(a))