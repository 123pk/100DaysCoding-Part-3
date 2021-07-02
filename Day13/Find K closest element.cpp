/*
Platform :- Leetcode
Problem :- Find K closest element 
Approach :- for given value of x find the relative distance from each A[i] and sort according to relative distance/absolute difference
            add first 'k' elemnts to answer array and sort it in asceding order and return ans
*/
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int y) {
        vector<int>ans;
        vector<pair<int,int>>P;
        for(auto &x:arr){
            P.push_back({abs(x-y),x});
        }
        
        sort(P.begin(),P.end());
        
        for(int i=0;i<k;++i)ans.push_back(P[i].second);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
