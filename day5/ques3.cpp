int multiply(int arr[], int n)
{
    int i,x=0,y=0;
    for(i=0;i<n/2;i++)
    {
        x=x+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        y=y+arr[i];
    }
    return x*y;