num1 = int(input())
num2 = int(input())
while(num2 != 0):
  rem = num1 % num2
  num1 = num2
  num2 = rem
print(num1)
