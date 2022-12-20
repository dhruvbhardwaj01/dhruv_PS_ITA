#include<stdio.h>
void main()
{
int f,d,k,m,c,rem,year;
printf("enter the date");
scanf("%d%d%d",&k,&m,&year);
if(m==1||m==2)
{
year=year-1;
}
if(m==1)
{
m=11;
}
else if (m==2)
{
m=12;
}
else
{
m=m-2;
}
d=year%100;
c=year/100;
f=k+(13*m-1)/5+d+d/4+c/4-2*c;
if(f>0)
{
rem=f%7;
}
else if(f<0)
{
    rem=f%7;
    rem=rem+7;
}
switch(rem)
{
case 0:
printf("SUNDAY");
break;
case 1:
printf("MONDAY");
break;
case 2:
printf("TUESDAY");
break;
case 3:
printf("WEDNESDAY");
break;
case 4:
printf("THURSDAY");
break;
case 5:
printf("FRIDAY");
break;
case 6:
printf("SATURDAY");
break;
}
}
