#include<stdio.h>
void main()
{
int i,j;
char c[40],t;
printf("enter the string\n");
fgets(c,40,stdin);
for(i=0;c[i]!=0;i++)
{
if(c[i]<=122&&c[i]>=97)
{
c[i]=c[i]-32;
}
else if(c[i]<=90&&c[i]>=65)
{
 c[i]=c[i]+32;
}
}
puts(c);
}
