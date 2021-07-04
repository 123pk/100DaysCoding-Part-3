/*
Platform :- Leetcode
Problem :- Cound Good Numbers 
Approach :- we can have {0, 2, 4, 6, 8} at even places and {2, 3, 5, 7} at odd indices , let ev = number of even indices and od = number of odd indices ,
            [ ev = (n+1)/2 ]  and [ od = (n/2) ]  the number of good strings is [ ( (5^ev) % mod * (4^od))%mod ] 
*/

//efficiently finding (x^y)%p
long long find(long long x, long long y, long long p)
{
    long long res = 1;      
 
    x = x % p;  
  
    if (x == 0) return 0;
 
    while (y > 0)
    {
         
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

class Solution {
public:
    int countGoodNumbers(long long n) {
        long long m=(n+1)/2;
        n=n/2;
        long long mod=1e9+7;
        long long ans=find(5,m,mod);
        long long ans2=find(4,n,mod);
        ans%=mod;
        ans2%=mod;
        long long z=ans;
        z*=ans2;
        z%=mod;
        int ans3=z;
        return ans3;
    }
};
