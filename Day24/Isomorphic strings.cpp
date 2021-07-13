/*
Platform :- Leetcode
Approach :- use vector of int to store indices of characters for both the strings , then run a loop from 0 to len-1 and if the vector of ith character is 
            same then continue else return false .
*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>P[1000],Q[1000];
        for(int i=0;i<s.size();++i){
            P[s[i]].push_back(i);
        }
        
        for(int i=0;i<s.size();++i){
            Q[t[i]].push_back(i);
        }
        
        
        for(int i=0;i<s.size();++i){
            char ch1=s[i];
            char ch2=t[i];
            if(P[ch1]!=Q[ch2]){
                return false;
            }
        }
        return true;
        
    }
};
