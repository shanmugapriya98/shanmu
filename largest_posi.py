def largest_possible(n):
  map(int,n)
  n.sort()
  n.reverse()
  return ''.join(map(str,n))

s = int(input())
num = raw_input().split()
res = largest_possible(num)
print res
