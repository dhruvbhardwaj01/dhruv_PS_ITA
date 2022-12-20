#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],b[10],i,j,flag;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cin>>b[i];
    }
    cout<<endl;
    cout<<"the common elements are";
    for(i=0;i<5;i++)
    {flag=0;
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j]&&flag==0)
            {
                cout<<a[i]<<" ";
                flag==flag+1;
            }
            else if(a[i]!=b[j])
            {
                continue;
            }
        }
    }

}