/*
Platform:- Leetcode
Problem :- Number of matching subsequence
Approach :- we need to greedily compare main string with array of strings in order to avoid tle . 
           --> we can store occurence of each alphabet for each string in 'words'array as there are only 26 alpabets, we will only compare when number of each alphabet 
               in main string is ( >=) number of alphabets in string of 'words'array
           ---> we will take care of already used strings of 'words'array and will not compare them again
*/
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<int>temp1(26,0);
        for(auto &x:s)temp1[x-'a']++;
        
        vector<vector<int>>P;
        for(int i=0;i<words.size();++i){
            vector<int>temp(26,0);
            for(int j=0;j<words[i].size();++j){
                temp[words[i][j]-'a']++;
            }
            P.push_back(temp);
        }
        
        int ans=0;
        map<string,int>used;
        for(int i=0;i<words.size();++i){
            int f=0;
            if(used[words[i]]!=0){
                ans+=max(0,used[words[i]]);
                continue;
            }
            
            //cout<<words[i]<<endl;
            vector<int>temp=P[i];
            for(int j=0;j<26;++j){
              //  cout<<temp1[j]<<" "<<temp[j]<<"\n";
                if(temp1[j]<temp[j]){
                    f=1;break;
                }
                
            }
           // cout<<endl;
            
            if(f==0){
               // cout<<" * ";
                int k=0;
                for(int j=0;j<s.size();++j){
                    if(s[j]==words[i][k])k++;
                    
                    if(k==words[i].size())break;
                }
                
                if(k==words[i].size()){
                    ans++;
                    used[words[i]]=1;
                }
                else used[words[i]]=-1;
            }
            else used[words[i]]=-1;
        }
        
        return ans;
    }
};
