#include<stdio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i = 1;i <= 12;i++)
{
printf("%d * %d = %d",i,num,(i*num));
}
}
