/*
Platform :- Leetcode
Problem :- count square sum triplet
Approach :- brute force three loops for a,b,c if condition is satisfied increment count 
*/
class Solution {
public:
    int countTriples(int n) {
        int ans=0;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=n;++j){
                for(int c=1;c<=n;++c){
                    int tot=i*i +(j*j);
                    int temp=c*c;
                    if(tot==temp)ans++;
                }
            }
        }
        return ans;
    }
};
