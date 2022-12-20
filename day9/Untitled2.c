#include<stdio.h>
int fact(int n)
{
    int i,facto=1;
    for(i=n;i>=1;i--)
    {
        facto=i*facto;
    }
    return facto;

}
int main()
{
    int r,n,handsh;
    scanf("%d",&n);
    r=fact(n-2);
    n=fact(n);
    handsh=n/(r*2);
    printf("%d",handsh);
    return 0;

}
