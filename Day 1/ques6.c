 #include<stdio.h>
 void main()
 {
 int a,b,c;
 printf("enter the sides of the triangle");
 scanf("%d%d%d",&a,&b,&c);
 if(a==b&&b==c)
 {printf("the triangle is equilateral triangle");
 }
else if (a==b&&b!=c||a==c&&a!=b||b==c&&a!=b)
 {printf("the triangle is isoceles triangle");
 }
 else {printf("the triangle is scalar");}
 }
