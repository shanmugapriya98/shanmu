String1 = input()
li = []
li = list(String1)
li.reverse()
String2 = ''.join(li)
if(String1 == String2):
  print("String is palindrome")
else:
  print("String is not palindrome")
