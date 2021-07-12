/*
Platform :- Codeforces
Contest :- Codeforces Round 732 Div 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<vector<int>>c1(m,vector<int>(26,0));
        vector<vector<int>>c2(m,vector<int>(26,0));
        for(int i=0;i<n;++i){
            string s;
            cin>>s;
            int d=0;
            for(auto &x:s){
                c1[d][x-'a']++;
                d++;
            }
        }
        
        for(int i=0;i<n-1;++i){
            string s;
            cin>>s;
            
            int d=0;
            for(auto &x:s){
                c2[d][x-'a']++;
                d++;
            }
        }
        
        string ans="";
        for(int i=0;i<m;++i){
            for(int j=0;j<26;++j){
                if(c1[i][j]!=c2[i][j]){
                    ans+=('a'+j);
                    break;
                }
            }
        }
        
        cout<<ans<<"\n";
        cout.flush();
    }
}
