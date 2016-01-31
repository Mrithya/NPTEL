#include<stdio.h>
int main()
{
  long i,j,num,sum=0;
  scanf("%d",&num);
  for(i=1;i<num;i++)
  {
    if(num%i==0)
    {
      sum=sum+i;
    }
  }
    if(sum==num)
    {
      printf("yes");
    }
  else
  {
    printf("no");
  }
  return 0;
}
      
