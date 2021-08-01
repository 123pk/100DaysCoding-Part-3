/*
Platform :- Leetcode
Contest :- Leetcode weekly contest 252
Hint :- notice that (0,0) is going to be center of our square so our square need to be of "even side" ,
        sum of A.P. is to be used.
*/
class Solution {
public:
    long long minimumPerimeter(long long A) {
        long long temp=0;
        long long d=1,dif=3;
        int x=0;
        while(1){
            
            long long z=d*(d+1);
            long long s=z+dif;
            long long n=d;
           
            long long sum=s*2+((n-1)*dif);
            sum*=(n);
            sum+=z;
           
            x++;
            dif+=2;
            d++;
           
            if(sum>=A)break;
        }
        
        x*=2;        
        long long ans=x*4;
        return ans;
    }
};
