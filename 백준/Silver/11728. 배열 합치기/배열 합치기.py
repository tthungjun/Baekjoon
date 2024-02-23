n, m = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

v = A + B
v.sort()

for item in v:
    print(item)