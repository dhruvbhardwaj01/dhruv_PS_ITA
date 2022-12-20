#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k;
char c[50];
printf("enter the string\n");
fgets(c,50,stdin);
j=strlen(c);
k=0;
while(k<j-1)
{
for(i=0;i<=k;i++)
{
printf("%c",c[i]);
}
printf("\t");
k++;
}
}
