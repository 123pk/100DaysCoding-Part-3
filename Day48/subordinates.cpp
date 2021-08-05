/*
Platform :- CSES
Topic :- Trees ,BFS ,backtracking
Approach :- create tree from given input now do bfs starting from node '1' and while backtracking compute number of subordinates of that particular node
*/
#include<bits/stdc++.h>
using namespace std;
 
void find(map<int,vector<int>>&Q , int idx ,vector<int>&ans){
    if(Q[idx].size()==0){
        return;
    }
  
    for(int i=0;i<Q[idx].size();++i){
        if(Q[Q[idx][i]].size()==0){
            ans[idx-1]++;
        }
        else{
            find(Q,Q[idx][i],ans);
             
            ans[idx-1]+=ans[Q[idx][i]-1]+1;
        }
    }
    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n;
     cin>>n;
     
     map<int,vector<int>>P;
     for(int i=0;i<n-1;++i){
         int x;
         cin>>x;
         P[x].push_back(i+2);
     }
     
     vector<int>ans(n,0);
     
     find(P,1,ans);
     for(auto &x:ans)cout<<x<<" ";
     cout<<"\n";
     
}
