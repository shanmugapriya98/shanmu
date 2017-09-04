#include<stdio.h>
int main()
{
int i,start_num,end_num,temp1,temp2,result = 0;
scanf("%d",&start_num);
scanf("%d",&end_num);
for(i = start_num;i <= end_num;i++)
   temp1 = i;
{
  while(temp1 != 0)
  {
    temp2 = temp1 % 10;
    temp1 = temp1 / 10;
    result = result + (temp2 * temp2 * temp2);
  }
  if(result == i)
    printf("%d",i);
}
}
