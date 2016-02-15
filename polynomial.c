#include<stdio.h>
/* function to calculate power x^y */
int power(int x, int y){
  int pow=1;
  while (y!=0){
      pow*=x;
      y--;
    }
  return pow;
}
int main()
{
  
  
  int n,x,i;  
 scanf("%d%d",&n,&x);  
 int arr[n+1];  
 for(i=n; i>=0; i--)  
 {  
 scanf("%d",&arr[i]);  
 }  
 int result =0;  
 for(i=n;i>0;i--) 
 
 {  
 result += arr[i]*power(x,i);  
 }  
 result += arr[i];  
 printf("%d",result);  

    return 0;
}
