#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int size_a, size_b, i, j, flag=0;
    scanf("%s", &a);
    scanf("%s", &b);
    size_a = strlen(a);
    size_b = strlen(b);
    if(size_a!=size_b)                   //if size of both strings are      unequal then print and exit
    {
        printf("no");
        exit(0);
    }
    for(i=0;i<size_a;i++)               //compare every element of a with every element of b
    {
        for(j=0; j<size_b;j++)
    {
        if(a[i]==b[j])
        {
            b[j]=0;                //when elements matches add character 'space' there, of ASCII value 32
            flag++;                 //flag guards of every successful match
        }
    }
}
if(flag==size_a&&flag==size_b)
    printf("yes");
else
    printf("no");
return 0;
}
