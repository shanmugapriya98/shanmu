#include<stdio.h>
int main()
{
int i = 0,j = 1,result;
int num,count  = 2;
scanf("%d",&num);
printf("%d\t%d\t",i,j);
while(count <= num)
{
result = i + j;
printf("%d\t",result);
i = j;
j = result;
count+=1;
}
}
