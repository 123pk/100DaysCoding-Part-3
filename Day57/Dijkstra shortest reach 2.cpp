/*
Platform :- Hakcerrank
Approach :- We need to perform standard dijkstra to find the shortest path .
           If you want to learn dijkstra check out " striver graph series " on youtube.
           Note :- To avoid TLE on test case 7 try to use the optimal/ minimum value between two pairs of nodes
           ex :- In input you may get 
                  1 2 4  // edge between 1 and 2 with distance 4
                  1 2 3  // edge between 1 and 2 with distance 3
                  1 2 1  // edge between 1 and 2 with distance 1
                  we will use the last 1 as it has the minium distance and avoid/ignore the rest two, so for each pair of unique nodes we will store the minimum value possible between
                  then
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
   
   //creating our graph 
   map<pair<int,int>,int>P;
   vector<pair<int,int>>graph[n];
  // set<pair<int,int>>used;
   int u,v, w;
   for(int i=0;i<m;++i){
       
       cin>>u>>v>>w;
       u--;
       v--;
       
       if(P[{u,v}]){
           if(P[{u,v}]>w){
               P[{u,v}]  = w;
           }
       }
       else{
           P[{u,v}] = w;
       }
       
      // used.insert({min(u,v),max(u,v)});
   }   
   
   for(auto &x:P){
       graph[x.first.first].push_back({x.first.second,x.second});
       graph[x.first.second].push_back({x.first.first,x.second});
   }
   // it store the cost of reaching each node from start node
   vector<int>dist(n,INT_MAX);
   
   //it store ith nodes is visited or not 
    
   int start;
   cin>>start;
   start--;
   
   //pair to store the node and the cost to reach it from start
   queue<pair<int,long long>>bfs;
   bfs.push({start,0});
  
   dist [start] = 0;
   
   //basic bfs
 
   pair<int,long long>temp;
   while(!bfs.empty()){
       int c=bfs.size();
       
       for(int i=1;i<=c;++i){
           temp = bfs.front();
           bfs.pop();
           // x is the curret node 
             
           
           for(int j=0;j<graph[temp.first].size();++j){
                 
                  
                if(temp.second + graph[temp.first][j].second<dist[graph[temp.first][j].first]){
                    dist[graph[temp.first][j].first] = temp.second + graph[temp.first][j].second;
                    bfs.push({graph[temp.first][j].first,dist[graph[temp.first][j].first]});
                }
           }
       }
   }
   
   int f=0;
   for(auto &x:dist){
       // x == 0 means it is the start node we ignore that node
       if(x==0 )continue;
       if(x==INT_MAX){
           cout<<"-1 ";
           continue;
       }
       cout<<x<<" ";
   }
   cout<<"\n";
   
}

}
 
