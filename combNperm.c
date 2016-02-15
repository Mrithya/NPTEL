#include<stdio.h>
//Write a function for n factorial. 
int fact(int n);
//Write a function calculating nCr
int ncr(int n,int r);
//Write a function calculating nPr
int npr(int n,int r);

int main(){
  int a,b,c,d,output_ncr,output_npr;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  output_ncr=ncr(a,b);
  output_npr=npr(c,d);
  printf("%d",(output_ncr-output_npr));
   return 0;
}

int fact(int n){
  
  int f=1,i;
  if(n==0)
  {
    return f;
  }
  else
  {
    for(i=1;i<=n;i++)
    {
      f=f*i;
    }
  }
  return f;
}
int ncr(int n,int r){

  int a;
  return (fact(n))/(fact(r)*fact(n-r));
  
}
int npr(int n,int r){

  return (fact(n)/fact(n-r));
  
}
