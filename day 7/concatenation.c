#include<stdio.h>
#include<string.h>
void main()
{
char c[40],d[40];
int i,j,k,f,g;
for(i=0;i<5;i++)
{
    scanf("%c",c[i]);
}
for(j=0;j<5;j++)
{
    scanf("%c",d[i]);
}
for(k=0;k<10;k++)
{
if(k<5)
{
    continue;
}
else if(k>5)
{
    c[k]=d[k-5];
}
}

for(k=0;k<10;k++)
{
    printf("%c",c[k]);
}
}
