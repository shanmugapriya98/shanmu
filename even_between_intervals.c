#include<stdio.h>
int main()
{
int start_num,end_num,i;
scanf("%d",&start_num);
scanf("%d",&end_num);
for(i=start_num;i<=end_num;i++)
{
if(i % 2 == 0)
printf("%d\n",i);
else
continue;
}
}
