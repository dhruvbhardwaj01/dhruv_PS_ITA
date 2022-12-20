#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3];
    int n=2;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=2;i>=0;i--)
    {
        for(j=2;j>=0;j--)
        {
          cout<<a[j][n-i]<<" ";
        }
        cout<<endl;
    }
}