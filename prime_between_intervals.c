#include<stdio.h>
int main()
{
int start_num,end_num,i,j,count = 0;
scanf("%d",&start_num);
scanf("%d",&end_num);
for(i = start_num;i <= end_num;i++)
{
for(j = 1;j <= i;j++)
{
if(i % j == 0)
count+=1;
}
if(count == 2)
printf("%d\n",i);
count = 0;
}
return 0;
}
