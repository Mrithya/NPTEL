#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,s1=0,s2=0,s3=0;
   scanf("%d",&x1);
   scanf("%d",&y1);
   scanf("%d",&x2);
   scanf("%d",&y2);
   scanf("%d",&x3);
   scanf("%d",&y3);
  							

	 float m ;										

	
	
   m = (x1*(y2-y3) + x2*(y3-y1) +x3*(y1-y2));
  
  if(m==0)
    printf("Yes");
  else
    printf("No");
return 0;

}
