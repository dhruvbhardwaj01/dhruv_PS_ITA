#include<stdio.h>
void main()
{
int i,j,n,m=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i<=(n+1)/2)
{
    for(j=1;j<=(n+1)/2-i;j++)
{
    printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
}
else if(i>(n+1)/2)
{
    for(j=1;j<=m;j++)
    {
        printf(" ");
    }
    m=m+1;
for(j=1;j<=(2*(n+1-i))-1;j++)
{
printf("*");
}
}
printf("\n");
}
}
