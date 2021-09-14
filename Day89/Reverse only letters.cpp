/*
Platform :- Leetcode
Approach :- There can be multiple approaches to this problem , 
            i .one can be to store all the alphabetic characters in new string and reverese them and then fill all the alphabatic 
               characters in oringinal string by the reversed chracters ,
            ii. we can make a new string which contains non alphabatic characters at the same position as in original string and store alphabatic characters with any character with
                higher ASCII value than 122  which can be '~' etc. Now reverse the original string and replace all the '~' with alphabatic characters of reversed original string.
*/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        string ans;
        string temp;
        for(auto &x:s){
            if(('a'<=x && x<='z') ||('A'<=x && x<='Z')){
                temp+=x;
                ans+='~';
            }
            else ans+=x;
        }
        
        reverse(s.begin(),s.end());
        int i=0;
        for(auto &x:s){
            if((x<='z' &&'a'<=x) ||(x<='Z' && x>='A')){
                while(1){
                    if(ans[i]=='~'){
                        ans[i]=x;
                        break;
                    }
                    i++;
                }
            }
        }
        
        return ans;
    }
};
