#include<stdio.h>
int main()
{
int num;
int fact = 1,i = 2;
scanf("%d",&num);
while(i <= num)
{
fact = fact * i;
i++;
}
printf("%d",fact);
}
