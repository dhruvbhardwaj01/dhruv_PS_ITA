#include<stdio.h>
void main()
{
    int i,j,n,s,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i-1;
        c=1;
        for(j=1;j<=2*i-1;j++)
        {
            if(j<=i)
            {
                printf("%d",c);
                c=c+1;

            }
            else if(j>i)
            {
                printf("%d",s);
                s=s-1;
            }
        }
        printf("\t");
    }

}
