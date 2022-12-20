#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k;
char c[50];
printf("enter the string\n");
fgets(c,50,stdin);
j=strlen(c);
k=j-1;
while(k>=0)
{
for(i=j-1;i>=k;i--)
{
printf("%c",c[i]);
}
printf("\t");
k--;
}
}
