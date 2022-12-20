#include<stdio.h>
void main()
{
int n;
printf("enter the year",n);
scanf("%d",&n);
if(n%400==0||n%4==0&&n%100!=0)
{
printf("the year is a leap year");
}
else
{printf("not a leap year");}
}
