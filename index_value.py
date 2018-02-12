def index_val(n):
    l = []
    for i in range(0,len(n)):
        if i == int(n[i]):
            l.append(str(n[i]))
    return ' '.join(l)

s = int(input())
num = raw_input().split()
res = index_val(num)
print res
