#include<stdio.h>
void main()
{
int i,j=0,mul,n;
scanf("%d",&n);
printf("the series is :");
for(i=1;i<=n;i++)
{
mul=i*(i+1)*(i+2);
printf("%d",mul);
printf(" ");
j=j+mul;
}
printf("the sum is : %d",j);
}
