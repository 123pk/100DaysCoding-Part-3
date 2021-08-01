/*
Platform :- Leetcode
Problem :- Count number of special subsequence
Contest :- Leetcode Weekly contest 252
Hint :- dp
*/
class Solution {
public:
    int countSpecialSubsequences(vector<int>& nums) {
        long long dp[3]={0,0,0};
        long long mod=1e9+7;
        for(auto &x:nums){
            dp[x]+=dp[x];
            if(x==0){
                dp[x]++;
            }
            else{
                dp[x]+=dp[x-1];
            }
            dp[x]%=mod;
        }
        return dp[2];
    }
};
