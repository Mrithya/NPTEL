#include<stdio.h>
int main()
{
  long num,result=1, rem;
  scanf("%d",&num);
  while(num!=0)
  {
    rem=num%10;
    result=result*rem;
    num=num/10;
  }
  printf("%ld",result);
  return 0;
}
