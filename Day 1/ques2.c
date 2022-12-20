#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greatest");

    }
    else if(b>a&&b>c)
    {
        printf("b is greatest");

    }

    else if(c>a&&c>b)
    {
        printf("c is greatest");
    }
}
