/*
Platform :- Leetcode
Contest :- Leetcode Weekly Contest 256
Approach :- sort the strings in lexiorgraphical order taking care of length ( smaller length string should come first ) then return the respective string
*/
bool comp(string &P,string &Q){
    if(P.length()==Q.length()){
        for(int i=0;i<P.length();++i){
            if(P[i]>Q[i])return false;
            if(P[i]<Q[i])return true;
        }
        return false;
    }
    return P.length()<Q.length();
}

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),comp);
        int n = nums.size();
        k = n-k;
        return nums[k];
    }
};
