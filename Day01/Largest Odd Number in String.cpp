/*
Platform :- Leetcode
Problem :- Largest Odd Number in String
Contest :- Weekly contest 246
Approach :- find the last index where we have odd number , the largest odd number is substring from start to the last odd number index
*/

class Solution {
public:
    string largestOddNumber(string s) {
        string ans="";
        int start=0,end=-1;
      
      // end store the last index where we have odd value
        for(int i=s.size()-1;i>=0;--i){
            if((s[i]-'0')%2){
                end=i;
                break;
            }
        }
        if(end==-1)return "";
        
        for(int i=start;i<=end;++i)ans+=s[i];
        return ans;
    }
};
