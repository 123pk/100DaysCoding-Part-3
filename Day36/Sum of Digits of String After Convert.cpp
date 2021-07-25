/*
Platform :- Leetcode
Problem :- Weekly contest 251
Approach :- convert string into integer or numeric string accordingly and repeat the said operation k times
*/
class Solution {
public:
    int getLucky(string s, int k) {
        map<char,int>P;
        for(char ch='a';ch<='z';++ch){
            P[ch]=(ch-'a')+1;
        }
        
        string start="";
        int tot=0;
        for(auto &x:s)start+=to_string(P[x]);
        tot=0;
        for(auto &x:start)tot+=x-'0';
        k--;
        start=to_string(tot);
   //     cout<<tot<<" ";
        while(k){
            tot=0;
            for(auto &x:start)tot+=x-'0';
            start=to_string(tot);
            k--;
        }
        return tot;
    }
};
