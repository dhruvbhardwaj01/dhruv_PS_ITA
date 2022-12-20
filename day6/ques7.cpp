#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,n,flag;
    cin>>n;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    sort(a , a + n);
    i=0;
   while(i<n)
    {
        if(i=n-1)
        {
            flag=a[i];
            break;
        }
        if(a[i]==a[i+1])
        {
         i=i+2;
        }
        else if(a[i]!=a[i+1]){
            flag=a[i];
            break;
        }
    }
    cout<<flag;
}