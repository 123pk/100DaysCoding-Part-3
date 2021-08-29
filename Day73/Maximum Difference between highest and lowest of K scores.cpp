/*
Platform :- Leetcode
Contest :- Leetcode Weekly Contest 256
Approach :- sort the array in increasing order and then find the difference between kth element from current index starting from k to n
*/
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        
        int ans=nums[0]-nums[k-1];
        for(int i=k;i<nums.size();++i){
            int temp=nums[(i+1)-k]-nums[i];
            ans=min(ans,temp);
        }
        return ans;
    }
};
