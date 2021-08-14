/*
Platform :- Hackerrank
Approach :- We do basic bfs and for node 'x' let the 'c' be the cost of reach this node , now for all the adjacent nodes to 'x' cost of reaching out them is 'c+6' according
            to problem statement. so we do basic bfs and starting node has cost '0' and for each node 'x' in bfs we add +6 to unvisited adjacent node od 'x' 
*/
#include<bits/stdc++.h>
using namespace std;

void solve(){
   int n,m;
   cin>>n>>m;
   
   //creating our graph 
   vector<int>graph[n];
   for(int i=0;i<m;++i){
       int u,v;
       cin>>u>>v;
       u--;
       v--;
       graph[u].push_back(v);
       graph[v].push_back(u);
   }   
   
   int start;
   cin>>start;
   start--;
   
   // it store the cost of reaching each node from start node
   vector<int>dist(n,-1);
   
   //it store ith nodes is visited or not 
   vector<int>visited(n);
   
   
   //pair to store the node and the cost to reach it from start
   queue<pair<int,int>>bfs;
   bfs.push({start,0});
   visited[start] = 1;
   dist [start] = 0;
   
   //basic bfs
   while(!bfs.empty()){
       int c=bfs.size();
       
       for(int i=1;i<=c;++i){
           pair<int,int>temp = bfs.front();
           bfs.pop();
           // x is the curret node 
           int x = temp.first;
           // cost is the total cost to reach the current node
           int cost = temp.second;
           
           for(int j=0;j<graph[x].size();++j){
               //val is the adjacent node of current node
               int val = graph[x][j];
               
               // checking if adjacent node is visited or not
               if(visited[val]==0){
                   // marking the adjacent node to be visited
                   visited[val] = 1;
                   // cost of reaching the adjacet edge is 
                   // (cost_of_reaching_current_node + 6 )
                   dist[val] = cost + 6;
                   bfs.push({val,cost+6});
               }
           }
       }
   }
   
   int f=0;
   for(auto &x:dist){
       // x == 0 means it is the start node we ignore that node
       if(x==0 )continue;
       cout<<x<<" ";
   }
   cout<<"\n";
   
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
}

