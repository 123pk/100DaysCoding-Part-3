/*
Platform :- Leetcode
Approach :- We can find all the squares('x^2') less than 'c' and check if (c-x^2) is a square or not .
*/
class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int i=0;
        while(1){
            long long temp = i;
            temp*=temp;
            
            if(temp>c)break;
            long long z = c-temp;
            long long x = sqrt(z);
            x*=x;
            if(x==z)return true;
            i++;
        }
        return false;
    }
};
