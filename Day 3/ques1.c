#include<stdio.h>
void main()
{
int i,n,fact=1,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("%d\t",fact);
sum=sum+fact;
}
printf("the sum is %d",sum);
}
