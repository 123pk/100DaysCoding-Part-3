/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 213
Approach :- It is euler tour problem , Use basic dfs and store the element whenever you go to it and comeback .
*/
#include<bits/stdc++.h>
using namespace std;

void dfs(map<int,vector<int>>&P ,vector<int>&used, vector<int>&ans ,int idx){
    
    if(P[idx].size()==0){
        return;
    }
     ans.push_back(idx);
    for(int i=0;i<P[idx].size();++i){
        if(used[P[idx][i]]==0){
            used[P[idx][i]]=1;
            dfs(P,used,ans,P[idx][i]);
            ans.push_back(idx);
        }
    }
    
}

int main(){
     
     int n;
     cin>>n;
     
    map<int,vector<int>>P;
     for(int i=0;i<n;++i){
         int u,v;
         cin>>u>>v;
          
         P[u].push_back(v);
         P[v].push_back(u);
     }
     
      for(auto &x:P){
         if(x.second.size()){
             sort(x.second.begin(),x.second.end());
         }
      } 
     
     vector<int>ans;
     vector<int>used(n+1);
     used[1]=1;
     dfs(P,used,ans,1);
     for(auto &x:ans)cout<<x<<" ";
     cout<<"\n";
     
}
