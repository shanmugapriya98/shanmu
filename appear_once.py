def appear_onetime(n):
    for i in n:
        if n.count(i) == 1:
            return i
      
s = int(input())
num = raw_input().split()
res = appear_onetime(num)
print res
