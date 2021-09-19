/*
Platform:- Leetcode
Contest :- Leetcode Weekly contest 259
Approach :- find X++,++X and add '1' else add -1
*/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        map<string,int>P;
        P["X++"]=1;
        P["++X"]=1;
        P["--X"]=-1;
        P["X--"]=-1;
        int ans=0;
        for(auto &x:operations)ans+=P[x];
        
        return ans;
    }
};
