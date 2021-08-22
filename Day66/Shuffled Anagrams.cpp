/*
Platform :- Codingcompetitionwithgoogle
Contest :- Google Kickstart Round E 2021
Approach :- There are two cases :-
          1. IMPOSSIBLE --> when the most frequent character appears more than (string_lenght/2)
          2. else we create an array of pair sorted by total occurence in string then create an array of index with character index and greedily intialise each index to character
             prioritise the ones with highest frequency.
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<char,int>&P,pair<char,int>&Q){
    return P.second>Q.second;
}

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        string s;
        cin>>s;
        
        string past= s;
        int n = s.size();
        map<char,vector<int>>P;
        set<char>unq;
        for(int i=0;i<n;++i){
            P[s[i]].push_back(i);
            unq.insert(s[i]);
        }
        
        int f=0;
        int mx=0;
        for(auto &x:P){
            int sz = x.second.size();
            mx=max(mx,sz);
        }
        
        
        if(mx>(n/2)){
            cout<<"IMPOSSIBLE\n";
        }
        else{
            vector<pair<char,int>>A;
            for(auto &x:unq){
                int sz= P[x].size();
                A.push_back({x,sz});
            }
            
            sort(A.begin(),A.end(),comp);
             
            
            vector<int>idx;
            for(int i=0;i<A.size();++i){
                char ch=A[i].first;
                for(int j=0;j<P[ch].size();++j){
                    idx.push_back(P[ch][j]);
                }
            }
            
            //for(auto x:idx)cout<<x<<" ";
           // cout<<endl;
            map<int,char>Q;
            int start = P[A[0].first].size();
            int j=0;
            for(int i=start;i<idx.size();++i){
                Q[idx[j]] = s[idx[i]];
                j++;
            }
            int i=0;
            for(;j<idx.size();++j){
                Q[idx[j]] = s[idx[i]];
                i++;
            }
       
            for(int i=0;i<n;++i){
                s[i] = Q[i];
            }
            //cout<<s<<" ";
             
                cout<<s<<"\n";
             
        }
    }
}
