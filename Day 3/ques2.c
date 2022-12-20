#include<stdio.h>
void main()
{
int i,n,ori,fact=1,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
ori=fact/i;
printf("%d\t",ori);
sum=sum+ori;
}
printf("the sum is %d",sum);
}
