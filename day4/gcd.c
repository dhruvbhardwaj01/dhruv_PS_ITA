#include<stdio.h>
int gcd(int A,int B);
void main()
{
int a,b,y;
scanf("%d%d",&a,&b);
y=gcd(a,b);
printf("%d",y);
}
int gcd(int A,int B)
{int a;
if(B==0)
{
return A;
}
else if(A>B)
{
a=gcd(B,A%B);
return a;
}
else if(A<B)
{
a=gcd(B,A);
return a;
}
}
