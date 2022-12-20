#include<stdio.h>
int catsandmouse(int a, int b, int c)
{
if(c-a<c-b)
{
printf("cat A");
return;
}
else if(c-b<c-a)
{
printf("cat B");
return;
}
else if(c-b==c-a)
{
printf("mouse will escape");
return;
}
}
void main()
{
int a,b,c,y;
scanf("%d%d%d",&a,&b,&c);
y=catsandmouse(a,b,c);
}
