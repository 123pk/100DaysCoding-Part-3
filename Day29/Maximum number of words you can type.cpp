/*
Platform :- Leetcode
Problem :- Maximum number of words you can type
Contest :- Leetcode Weekly contest 250
Approach :- If the words don't contain characters of brokenletters then we can type that word
*/
class Solution {
public:
    int canBeTypedWords(string text, string A) {
        text+=' ';
        vector<string>P;
        string temp;
        for(auto &x:text){
            if(x==' '){
                
                P.push_back(temp);temp="";
            }
            else temp+=x;
        }
        
        
        int ans=0;
        vector<int>Q(26);
        for(auto &x:A){
            Q[x-'a']++;
        }
        
        for(auto &x:P){
            int f=0;
            for(auto &y:x){
                if(Q[y-'a']){
                    f=1;break;
                }
            }
            
            if(f==0)ans++;
        }
        return ans;
        
    }
};
