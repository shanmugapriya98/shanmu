#include<stdio.h>
int main()
{
int num,reverse = 0,temp;
scanf("%d",&num);
while(num != 0)
{
temp = num % 10;
num = num /10;
reverse = reverse * 10 + temp;
}
printf("%d",reverse);
}
