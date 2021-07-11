/*
Platform :- Codeforces
Contest :- Codeforces Round 732 Div 2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        
        vector<string>A;
        map<char,int>P,Q;
        map<char,set<int>>idx,idx2;
        for(int i=0;i<n;++i){
            string s;
            cin>>s;
            
            int d=0;
            for(auto &x:s){
                idx[x].insert(d);
                d++;
                P[x]++;
            }
            A.push_back(s);
            
        }
        
        vector<string>Z;
        for(int i=0;i<n-1;++i){
            string x;
            cin>>x;
            int d=0;
            for(auto &y:x){
                idx2[y ].insert(d);
                d++;
                P[y]--;
            }
            Z.push_back(x);
        }
        
        
        string zz="";
        for(char ch='a';ch<='z';++ch){
            if(P[ch]){
                for(int i=1;i<=P[ch];++i){
                    zz+=ch;
                }
            }
        }
        
        sort(zz.begin(),zz.end());
        
        string ans="";
        vector<string>flt;
        
         for(auto &x:A){
            string y=x;
            sort(y.begin(),y.end());
            if(y==zz)flt.push_back(x);
         }
         int mx=INT_MAX;
         for(auto &x:flt){
             int sc=0;
             for(auto &y:Z){
                 int d=0,k=0;
                 for(int i=0;i<m;++i){
                     if(x[i]==y[i])k++;
                 }
                 sc=max(sc,k);
             }
             if(sc<mx){
                 mx=sc;
                 ans=x;
             }
         }
        
        cout<<ans<<endl;
        cout.flush();
    }
}
