#include<stdio.h>
#include<string.h>

int main()
{int a,b=0,i;char s[100];
  scanf("%s",&s);
  a=strlen(s);
  for(i=0;i<a;i++)
  {
    if(s[i]=='(')
      b++;
    else if(s[i]==')')
      b--;
      
      else
      printf("%d ",b);
      
  }
  printf("#");
 return 0; 

}
