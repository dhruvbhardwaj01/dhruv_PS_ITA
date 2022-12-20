void main()
{
int i,j,k,n,m,s;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=i;
for(k=1;k<=n-i;k++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
    if(j<=i)
    {
printf("%d",s);
s=s+1;
}
}
m=s-2;
{
for(j=1;j<=i-1;j++)
{
printf("%d",m);
m=m-1;
}
}
printf("\n");
}
}

