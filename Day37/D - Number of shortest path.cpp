/*
Platform :- Atcoder
Contest :- Atcoder beginner contest 211
Approach :- We need to use modifies bfs where we maintain two values for each node { dist , no_of_shortest_path } where dist is the distance of this node from root node and
            no_of_shortest_path is total number of shortest path till current node from root node .
            --> we initialise dist to 'inf'--> 10^18 for each node and dist of root node is 0 and no_of_shortest_path = 1 for this node . 
            --> we do bfs and if ( dist[v] > dist[u]+1 ) then dist[v]= dist[u]+1 , no_of_shortest_path[v]=no_of_shortest_path[u] & dfs(v) ,  
            ---> if dist[v] == dist[u]+1 then ( no_of_shortest_path[v] = no_of_shortest_path[v]+no_of_shortest_path[u] % mod )
            print the values of no_of_shortest_path[n]
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,m;
     cin>>n>>m;
     
     vector<int>P[n];
     for(int i=0;i<m;++i){
         int u,v;
         cin>>u>>v;
         u--;
         v--;
         P[u].push_back(v);
         P[v].push_back(u);
     }
     
     vector<int>dist(n,INT_MAX),cost(n);
     long long mod=1e9+7;
     queue<int>Q;
     Q.push(0);
     dist[0]=0;
     cost[0]=1;
     while(!Q.empty()){
         int c=Q.size();
         for(int i=1;i<=c;++i){
             int temp=Q.front();
             Q.pop();
             for(int j=0;j<P[temp].size();++j){
                 if(dist[P[temp][j]]>(dist[temp]+1)){
                     Q.push(P[temp][j]);
                     cost[P[temp][j]]=cost[temp];
                     dist[P[temp][j]]=dist[temp]+1;
                 }
                 else if(dist[P[temp][j]]==(dist[temp]+1))cost[P[temp][j]]=(cost[P[temp][j]]+cost[temp])%mod;
             }
         }
     }
     
     cout<<cost[n-1]<<"\n";
}
