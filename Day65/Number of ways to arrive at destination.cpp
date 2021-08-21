/*
Platform :- Leetcode
Contest :- Leetcode Bi-Weekly contest 59
Approach :- Modified djikstra , whenever we have a optimal distance till node 'i' from 'x' then no of ways of reach out to 'i' is equal to 'x' if we get the optimal answer again
            then we add number of ways to reach 'i' with no of ways to reach x %mod;
*/
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        long long ans=1;
        long long mod = 1e9+7;
        map<pair<int,int>,long long>cost;
        
        vector<int>graph[n];
        //creating the graph and storing cost of edges 
        for(auto&x:roads){
            cost[{min(x[0],x[1]),max(x[0],x[1])}] =x[2];
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        
        //dist function to store the minimum distance from 0 to ith node
        vector<long long>dist(n,1e18);
        vector<long long>way(n);
        priority_queue<pair<long long,int>>bfs;
        bfs.push({0,0});
        dist[0]=0;
        way[0]=1;
        while(!bfs.empty()){
            int c = bfs.size();
            for(int i=1;i<=c;++i){
                pair<long long,int>temp = bfs.top();
                bfs.pop();
                int x = temp.second;
                long long z = abs(temp.first); 
                
                for(int j=0;j<graph[x].size();++j){
                    
                    long long val = z+cost[{min(x,graph[x][j]),max(x,graph[x][j])}];
                    
                    if(val<dist[graph[x][j]]){
                        dist[graph[x][j]] = val;
                        bfs.push({-val,graph[x][j]});
                        way[graph[x][j]] = way[x];
                    }
                    else if(val==dist[graph[x][j]]){
                        way[graph[x][j]]=(way[graph[x][j]]+way[x])%mod;
                    }
                }
            }
        }
        
        return way[n-1]%mod;
    }
};
