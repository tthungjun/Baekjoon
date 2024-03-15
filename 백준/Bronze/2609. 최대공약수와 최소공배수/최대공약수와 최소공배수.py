def uclid1 (a, b):
    while b != 0:
        a, b = b, a%b
    
    return a
    
def uclid2 (a, b):
    return int(a * b / uclid1(a, b))


a , b = map(int,input().split())
print(uclid1(a,b))
print(uclid2(a,b))