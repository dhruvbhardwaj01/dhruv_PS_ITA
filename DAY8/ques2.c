#include<stdio.h>
#include<math.h>
int number(int a, int b, int k)
{
int c,x;
c=pow(a,b);
while(c>0&&k>0)
{
x=c%10;
c=c/10;
k=k-1;
}
return x;
}
void main()
{
int k;
k=number(15,2,3);
printf("%d",k);
}
