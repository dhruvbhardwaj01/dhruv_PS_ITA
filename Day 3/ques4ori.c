#include<stdio.h>
#include<math.h>
void main()
{
float c,n,ori,x,fact=1,sum=0;
int i;
scanf("%f",&n);
scanf("%f",&x);
for(i=0;i<n+1;i++)
{
fact=fact*i;
if(fact==0)
{
    fact=1;
}
ori=pow(x,i);
if(i%2!=0)
{
    ori=ori*-1;
}
else
{
    ori=ori*1;
}
c=ori/fact;
printf("%f\t",c);
sum=sum+c;
}
printf("the sum is %f",sum);
}
