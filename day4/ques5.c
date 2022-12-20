#include<stdio.h>
primeinseries(int lp, int up);
void main()
{int lp,up;
    scanf("%d%d",&lp,&up);
    primeinseries(lp,up);
}
primeinseries(int lp, int up)
{int i,j;
printf("the number are ");
for(j=lp;j<=up;j++)
    {
        int c=0;
    for(i=1;i<=j;i++)
    {
       if(j%i==0)
       {
           c=c+1;
       }
    }
       if(c==2)
       {
           printf("%d\n",j);
       }
}
}
