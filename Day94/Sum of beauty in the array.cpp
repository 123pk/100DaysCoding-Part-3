/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 259
Approach :-  maintain a max prefix array and min suffix array and for each index 'i' check if prefix[i-1] < nums[i] && nums[i] < suff[i+1] , if this condition is satisfied then 
             we add 2 to our answer else we check for adjancent element ( nums[i-1]<nums[i] && nums[i]< nums[i+1] ) and add '1' if it sastisifes . 
*/
class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        
        int ans=0;
        int mx  = 0,mn = INT_MAX;
        int n = nums.size();
       
        vector<int>pref(n),suff(n);
        for(int i=0;i<nums.size();++i){
             mx=max(mx,nums[i]);
            pref[i]=mx;
        }
        
        for(int i=nums.size()-1;i>=0;--i){
            mn = min(mn,nums[i]);
            suff[i] = mn;
        }
        
        int f=0;
         
         for(int i=1;i<n-1;++i){
             if(nums[i]>pref[i-1] && nums[i]<suff[i+1]){
                 ans+=2;
             }
             else if(nums[i]>nums[i-1] && nums[i]<nums[i+1])ans++;
         }
        
       return ans;
        
         
    }
};
