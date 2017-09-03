#include<stdio.h>
int main()
{
int num,temp1,temp2,sum=0;
scanf("%d",&num);
temp1 = num;
while(temp1 != 0)
{
temp2 = temp1 % 10;
temp1 = temp1 / 10;
sum = sum + (temp2 * temp2 * temp2);
}
if(num == sum)
printf("Armstrong number");
else
printf("Not armstrong number");
}
