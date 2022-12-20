#include<stdio.h>
#include<string.h>
void main()
{
char c[40];
int count,i,j,k;
fgets(c,40,stdin);
k=strlen(c);
printf("%s",c);
for(i=0;i<k;i++)
{
    count=1;
    for(j=i+1;j<k;j++)
    {
        if(c[i]==c[j])
        {
            c[j]='$';
            count=count+1;
        }
    }
    if(c[i]!='$'&&c[i]!=' 'S)
    {
        printf("the frequency of %c is %d\n",c[i],count);
}
}
}
