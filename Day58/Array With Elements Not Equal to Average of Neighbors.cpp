/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 254
Appraoch :- All elements are distinct so we can exploit this property , we can always have that array , sort the array and for all the odd index( '0' based indexing) swap with 
            previous element
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i+=2){
            swap(nums[i],nums[i-1]);
        }
        return nums;
    }
};
