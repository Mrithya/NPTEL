#include<stdio.h>

int main()
{
  int a[10],b[10];
  int i,j,temp=0,test;
  scanf("%d",&test);
  while(test>0)
  {
  for(i=1;i<=10;i++)
  {
    scanf("%d",&a[i]);
  }
    for(i=1;i<=10;i++)
    {
      b[i]=a[i];
    }
    
  for(i=1;i<=10;i++)
  {
    for(j=i+1;j<=10;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
    
  }
  for(i=1;i<=10;i++)
  {
    if(a[3]==b[i])
    {
      printf("%d",i);
      
      if(test!=1)
     printf("\n");
             break;
      
      }
  }
    
    test--;
  }
  return 0;
}
