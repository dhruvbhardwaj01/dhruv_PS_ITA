#include<stdio.h>
void main()
{
int i,j;
for(i=0;i<=3;i++)
{
char c='A'+i;
for(j=0;j<=i;j++)
{
printf("%c",c);
c=c+1;
}
printf("\n");
}
}
