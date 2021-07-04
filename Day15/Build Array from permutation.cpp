/*
Platform :- Leetcode
Problem :- Build Array from permutation
Approach :- make an array such that arr[i] = nums[nums[i]] 
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();++i){
            ans.push_back(nums[nums[i]]);
        }
        
        return  ans;
    }
};
