#include<stdio.h>
int main()
{
  int i,j,k;
  int n;
  long a[99];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%ld",&a[i]);
  }
   
   int max_so_far = a[0], max_ending_here = 0;

for ( i = 0; i < n; i++)
{
max_ending_here = max_ending_here + a[i];
if (max_so_far < max_ending_here)
max_so_far = max_ending_here;
if (max_ending_here < 0)
max_ending_here = 0;

}
  printf("%d",max_so_far);
  return 0;
}
