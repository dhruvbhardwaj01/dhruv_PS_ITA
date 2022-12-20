#include<stdio.h>
void main()
{
int i,j;
char c[50];
printf("enter the string\n");
fgets(c,50,stdin);
for(i=0;c[i]!=0;i++)
{
if(c[i]==' ')
{j=j+1;}
}
j=j+1;
printf("the lnumber of words are %d",j);

}
