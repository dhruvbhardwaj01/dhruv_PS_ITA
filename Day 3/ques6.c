#include<stdio.h>
#include<math.h>
int facto(int n);
void main()
{
float c,n,ori,x,fact=1,sum=0;
int i,z=0;
scanf("%f",&n);
scanf("%f",&x);
for(i=0;i<n+1;i++)
{
  if(i%2==0)
{
fact=facto(i);
ori=pow(x,i);
if(z%2!=0)
{
    ori=ori*-1;
}
c=ori/fact;
printf("%f\t",c);
sum=sum+c;
z=z+1;
}
else
{
    continue;
}
}
printf("the sum is %f",sum);
}
int facto(int n)
{
    int k;
    if (n==0)
    {
        return 1;
    }
    k=n*facto(n-1);
    return k;
}
