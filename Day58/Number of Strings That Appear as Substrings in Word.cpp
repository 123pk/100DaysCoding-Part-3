/*
Platform :- Leetcode
Contest :- Leetcode Weekly contest 254
Approach :- brute force all the string in array of word and check if they exist or not 
*/
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string words) {
        int ans=0;
        
        for(auto &x:patterns){
            for(int i=0;i<words.size();++i){
                if(words[i]==x[0]){
                    int f=0,c=0;
                    for(int j=0;j<x.size() && (i+j)<words.size();++j){
                        if(words[i+j]!=x[j]){
                            f=1;break;
                        }
                        c++;
                    }
                    
                    if(c==x.size()){
                        ans++;
                        break;
                    }
                }
            }
        }
        
        return ans;
    }
};
