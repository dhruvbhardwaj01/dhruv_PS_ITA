#include<stdio.h>
void main()
{
int i,j;
char c[40],t;
printf("enter the string\n");
fgets(c,40,stdin);
for(i=0;c[i]!=0;i++)
{
j=j+1;
}
j=j-1;
for(i=0;i<=j-i-1;i++)
{
t=c[i];
c[i]=c[j-i-1];
c[j-i-1]=t;
}
puts(c);
}
