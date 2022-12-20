#include<stdio.h>
int reverse(int x ,int n);
void main()
{
int n,rev;
scanf("%d",&n);
rev=reverse(0,n);
printf("%d",rev);
if(rev==n)
{
    printf("number is a palindrome");
}
else
{
    printf("not a palindrome");
}
}
int reverse(int x,int n)
{
if(n==0)
{
return x;
}
x=reverse(10*x+n%10,n/10);
}
