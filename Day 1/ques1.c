  #include<stdio.h>
int main()
{
    int basesalary, pf , allow, hra, totalsalary, da;
    char grade;
    printf("enter the grade");
    scanf("%c",&grade);
    printf("enter the basic salary");
    scanf("%d",&basesalary);
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else if(grade=='C')
    {
        allow=1300;
    }
     pf=0.11*basesalary;
    hra=0.2*basesalary;
    da=0.5*basesalary;
     totalsalary=basesalary+hra+allow+da-pf;
    printf("the total salary is %d",totalsalary);
return 0;
}
