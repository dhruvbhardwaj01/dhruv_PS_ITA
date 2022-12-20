#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k;
char c[50];
printf("enter the string\n");
fgets(c,50,stdin);
j=strlen(c);
for(i=0;i<j-1;i++)
{
if(c[i]==' ')
{
continue;
}
else
{
printf("%c",c[i]);
}
}
}
