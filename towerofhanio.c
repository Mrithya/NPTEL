#include <stdio.h>
int TOH(int,char,char,char);
int main()
{
int n;

scanf("%d",&n);
int c = TOH(n,'A','C','B');
printf("%ld", c);
return 0;
}
int TOH(int n,char first,char third,char second)
{
int count=0;
if(n>0){
count=TOH(n-1, first, second, third);
count++;
count+= TOH(n-1, second, third, first);
}
return count;
}
