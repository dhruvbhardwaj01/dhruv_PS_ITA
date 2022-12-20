#include<stdio.h>
#include<math.h>
int facto(int n);
void main()
{
float c,fact,sum=0,n;
int i,f=1;
scanf("%f",&n);
for(i=1;i<=n+1;i++)
{
if(i%2!=0)
{
    fact=facto(i);
    if(f%2==0)
    {
        fact=fact*-1;
    }
    c=f/fact;
    printf("%f\t",c);
    //printf("%f\t",fact);
    //printf("%d\t",f);
    f=f-1;
}
f=f+1;

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
