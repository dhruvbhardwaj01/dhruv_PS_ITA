#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='B'||ch=='C'||ch=='D'||ch=='E')
    {
        printf("character is vowel");
    }
    else
    {
        printf("character is consonant ");
    }
}
