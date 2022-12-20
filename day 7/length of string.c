#include<stdio.h>
void main()
{
int i,j=0;
char c[40];
printf("enter the string\n");
fgets(c,40,stdin);
for(i=0;c[i]!='/0';i++)
{
j=j+1;
}
j=j-1;
printf("the length of string is %d",j);
}
