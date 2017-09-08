num1 = int(input())
num2 = int(input())
temp1 = num1
temp2 = num2
while(num2 != 0):
  re = num1 % num2
  num1 = num2
  num2 = re
lcm = (temp1 * temp2) / (num1)
print(lcm)
