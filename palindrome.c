#include<stdio.h>
int main()
{
  int num,temp1,temp2,rev = 0;
  scanf("%d",&num);
  temp1 = num;
  while(temp1 != 0)
  {
    temp2 = temp1 % 10;
    temp1 = temp1 / 10;
    rev = rev * 10 + temp2;
  }
  if(num == rev)
  printf("%d is palindrome",num);
  else
  printf("%d is not palindrome",num);
  }
         
