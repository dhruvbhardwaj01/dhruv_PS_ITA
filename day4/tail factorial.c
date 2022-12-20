#include<stdio.h>
tailfact(int n,int r);
void main()
{
    int n,y;
scanf("%d",&n);
y=tailfact(n,1);
printf("%d",y);
}
tailfact(int n,int r)
{
if
(n==1)
{
return r;
}
int y;
y=tailfact(n-1,n*r);
}
