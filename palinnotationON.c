#include<stdio.h>
#include<string.h>
char str[100]; /* character array to store the string */
void printChars(char *p, char *q){
  if(p == NULL)
    printf("0");
  else{
    char* itr = p;
    while(itr <= q){
      printf("%c",*itr);
      itr++;
    }
  }
}

int main(){

   char a[100];
    int n,i;
    scanf("%s",a);
    char *p,*q;
  	n=strlen(a);
    p=a;
    q=&a[n-1];
    if(p!=q)
    {
    
   while(p<q && *p==*q)
   {
     p++;
     q--;
     
   }
  if(p==a)
  {
    p=NULL;
    q=NULL;
  }
  else if(p<q)
  {
    q=p-1;
    p=a;
  }
  else
  {
    p=a;
    q=a+n-1;
  }
    }
  printChars(p,q);
  return 0;
  
}

