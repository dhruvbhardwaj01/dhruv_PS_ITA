class Solution {
public:
    int countPrimes(int n) {
      int i,a;
        a=n-2;
        
        if(n==1)
{
            return 0;
        }
        else if(n==2){
            return 0;
}
        else if(n==0)
        {
            return 0;
        }
        else if(n==3)
        {
            return 1;
        }
        else{
        for(i=4;i<n;i++)
            {
         if(i%2==0||i%3==0||i%5==0)
            {
             if(i==5)
            {
             continue;
            } 
             else
            {
            a=a-1;
            }
            }
            }            
            }
        return a;
            }
};