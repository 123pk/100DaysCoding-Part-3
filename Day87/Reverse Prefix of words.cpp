/*
Platform :- Leetcode
Contest :- Weekly contest 258
Approach :- Find the first index of required character and reverse string upto that index and leave the rest of string as is and concatenate.
*/
class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int idx=0;
        for(int i=0;i<word.size();++i){
            ans+=word[i];
            if(word[i]==ch){
                //ans+=ch;
                idx=i+1;
                break;
            }
        }
        if(idx==0)return ans;
       // if(idx)
        reverse(ans.begin(),ans.end());
        
        for(int i=idx;i<word.size();++i)ans+=word[i];
        
        return ans;
    }
};
