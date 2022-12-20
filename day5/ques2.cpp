#include<iostream>
using namespace std;
int maxDays(int arr[],int n)
{
int i,t;
t=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>t)
        {
            t=arr[i];
        }
    }
    return t;
}
int main()
{
}