#include<stdio.h>
void main()
{
int i,j,k=0;
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
if(c[i]==c[j-i-1])
{
k=k+1;
}
}
if(k>=j/2)
{
printf("It is a palindrome");
}
else
{
printf("not palindrome");
}
}
