x = map(int, raw_input().split())
l = []
for i in range(len(x)):
    if((i % 2 == 0) and (x[i] % 2 != 0)):
        l.append(str(x[i]))
    elif((i % 2 != 0) and (x[i] % 2 == 0)):
        l.append(str(x[i]))
print ' '.join(l)
                 
