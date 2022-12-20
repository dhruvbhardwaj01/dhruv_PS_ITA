#include<stdio.h>
int power(int x,int n);
void main()
{
int x,n,y;
scanf("%d%d",&x,&n);
y=power(x,n);
printf("%d",y);
}
int power(int x,int n)
{ int y;
if(x==0)
{
return 0;
}
else
{
if(n==0)
{
return 1;
}
if(n%2==0)
{
y=power(x,n/2)*power(x,n/2);
return y;
}
else{
y=x*power(x,n/2)*power(x,n/2);
return y;
}
}
}
