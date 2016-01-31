#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,d=0;
  
  scanf("%d",&a);
  scanf("%d",&b);
for(i=1;i<=b;i++)
 {
   if((i*i)>=a && (i*i)<=b)
     d++;
 }
  printf("%d",d);
return 0;
}
