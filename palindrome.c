str = input()
for i in range(len(str)-1,0):
  str_rev = str_rev + str[i]
if(str == str_rev):
  print("palindrome")
else:
  print("Not palindrome")
