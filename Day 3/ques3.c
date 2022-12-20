#include<stdio.h>
#include<math.h>
void main()
{
float i,n,ori,x,fact=1,sum=0;
float c;
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
c=ori/fact;
printf("%f\t",c);
sum=sum+c;
}
printf("the sum is %f",sum);
}
