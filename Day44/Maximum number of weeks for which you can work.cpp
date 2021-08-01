/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 252
Approach :- It is the [ min( tot , 2*(tot-max_value) + 1 ) ] here tot --> sum of all elements and max_value ---> max value of array
*/
class Solution {
public:
    long long numberOfWeeks(vector<int>& A) {
         
        int n=A.size();
         sort(A.begin(),A.end(),greater<int>());
        long long tot=0;
        for(auto &x:A)tot+=x;
        int i=0,j=n-1;
         
        long long ans=min(tot,2*(tot-A[0])+1);
        return ans;
    }
};
