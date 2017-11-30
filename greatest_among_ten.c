#include<stdio.h>
int main()
{
int num[10],max,i;
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
}
max = num[0];
for(i=1;i<10;i++)
{
if(max < num[i])
max = num[i];
}
printf("%d is greatest",max);
return 0;
}
