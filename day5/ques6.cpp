#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int i,t;
    for(i=0;i<5;i+2)
    {
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
    }
    for(i=0;i<5;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
}