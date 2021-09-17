/*
Platform :- Leetcode
Approach :- find the min freqency of each element in both first and second array , then make an array with those frequency for each element.
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        
        map<int ,int>P,Q;
        for(int i=0;i<nums1.size();++i)P[nums1[i]]++;
        for(auto &x:nums2)Q[x]++;
        
        for(auto &x:P){
            P[x.first] =min(Q[x.first],x.second); 
        }
        
        for(auto x:P){
            for(int i=0;i<x.second;++i){
                ans.push_back(x.first);
            }
        }
        
        return ans;
    }
};
