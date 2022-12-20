#include<stdio.h>
void main()
{
int i,j;
char c='A';
for(i=1;i<=3;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",c);
}
c=c+1;
printf("\n");
}
}
