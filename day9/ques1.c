#include<stdio.h>
void main()
    {
    int n,i,ini=9,a=24;
    scanf("%d",&n);
    if(n>1)
    {
    for(i=2;i<=n;i++)
    {
      ini=ini+a;
      a=a+16;
    }
    }
    printf("%d",ini);
    }
