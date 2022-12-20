#include<stdio.h>
void main()
{
int x,y;
printf("enter the value of x and y coordinate respectively");
scanf("%d%d",&x,&y);
if(x>0&&y>0)
printf("point lies in 1st quadrant");
else if(x<0&&y>0)
{printf("point lies in 2nd quadrant");
}
else if(x<0&&y<0)
{printf("point lies in 3rd quadrant");
}
else if(x>0&&y<0)
{printf("point lies in 4th quadrant");
}
}
