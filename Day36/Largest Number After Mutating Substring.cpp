/*
Platform :- Leetcode
Problem :- Largest Number After Mutating Substring
Approach :- run a loop for ( i=0 to i < size_of_array ) if we found a index whose replacement is greater than current value we replace with that value and from now onwards 
            if replacement is >= current value we replace else break and return the changed string
Contest :- Weekly contest 251
*/
class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        string ans="";
        int f=0,g=0;
        for(auto &x:num){
            if(change[x-'0']>=(x-'0')  && g==0){
                if(f){
                    ans+=to_string(change[x-'0']);
                }
                else{
                    if(change[x-'0']>(x-'0')){
                        f=1;
                        ans+=to_string(change[x-'0']);
                    }
                    else ans+=to_string(change[x-'0']);
                }
                 
                
            }
            else{
                if(f)g=1;
                ans+=x;
            }
        }
        return ans;
    }
};
