/*
Platform :- Codeforces
Contest :- Codeforces Alpha Round #20
Approach :- Minimu cost path from node 1 to  n using dijkstra algorithm if possible else print -1
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
     
        int n,m;
        cin>>n>>m;
        
        map<int,vector<int>>P;
        map<pair<int,int>,int>weight;
        vector<long long>cost(n,1e18);
        for(int i=0;i<m;++i){
            int u,v,w;
            cin>>u>>v>>w;
            
            u--;
            v--;
            P[u].push_back(v);
            P[v].push_back(u);
            weight[{min(u,v),max(u,v)}] = w;
        }
        
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>> >bfs;
        bfs.push({0,0});
        cost[0]=0;
        vector<int>parent(n);
        int f=0;
        
        while(!bfs.empty()){
            int c=bfs.size();
            
            for(int i=1;i<=c;++i){
                pair<long long,int>temp = bfs.top();
                bfs.pop();
                
                long long charge = temp.first;
                int u = temp.second;
                
                for(int j=0;j<P[u].size();++j){
                    int val = P[u][j];
                    long long tot = charge + weight[{min(u,val),max(u,val)}];
                    
                    if(tot<cost[val]){
                        cost[val] = tot;
                        parent[val] = u;
                        
                        if((val+1)==n){
                            f=1;
                            continue;
                        }
                        bfs.push({tot,val});
                    }
                }
            }
        }
        
        if(f==0)cout<<"-1"<<endl;
        else{
            int start=n-1;
            vector<int>ans;
            ans.push_back(n);
            while(1){
                start = parent[start];
                ans.push_back(start+1);
                if(start==0)break;
            }
            
            reverse(ans.begin(),ans.end());
            for(auto &x:ans)cout<<x<<" ";
            cout<<endl;
        }
}
