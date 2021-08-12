/*
Platform :- Leetcode
Approach :- store the index of all the rotten orranges in vector , now traverse through the vector and also maintain a 2d grid of same dimension as input matrix and 
            every time we visit( using bfs ) the fresh orange, we look for smallest time it needed to get rotten , intitally we fill the values with fresh oranges in our 
            new matrix with ( infintiy ) , at the end we will look for the max value in our new matrix if that value is infinity then we return empty array else we return the
            max value
*/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>>max_time(n,vector<int>(m));
        
        //basic bfs
        int d=0;
        vector<pair<int,int>>rotten_orange;
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]==2){
                    rotten_orange.push_back({i,j});
                }
                else if(grid[i][j]==1){
                    d++;
                    max_time[i][j] = INT_MAX;
                }
            }
        }
        int ans=0;
        if(d==0)return ans;
        
         
        for(int i=0;i<rotten_orange.size();++i){
        

            queue<pair<pair<int,int>,int>>bfs;
            bfs.push({rotten_orange[i],0});
            set<pair<int,int>>vis;

            vis.insert(rotten_orange[i]);

            int zz=0;
            while(!bfs.empty()){
                int c = bfs.size();
                for(int i=0;i<c;++i){
                    pair<pair<int,int>,int>temp = bfs.front();
                    bfs.pop();
                    int x = temp.first.first;
                    int y = temp.first.second;
                    int dep = temp.second;

                    if(max_time[x][y]>dep){
                        max_time[x][y] = dep;
                    }
                    //check in all four direction if we have any fresh orange or  not

                    if(x+1<n){
                        if(grid[x+1][y]==1){
                            if(vis.find({x+1,y})==vis.end()){
                                d--;
                               
                                bfs.push({{x+1,y},dep+1});
                                vis.insert({x+1,y});
                            }
                        }

                    }

                    if(x-1>=0){
                        if(grid[x-1][y]==1){
                            if(vis.find({x-1,y})==vis.end()){
                                {
                                d--;  
                                
                                bfs.push({{x-1,y},dep+1});
                                vis.insert({x-1,y});
                                }
                            }
                        }

                    }

                    if(y-1>=0){
                        if(grid[x][y-1]==1){
                           if(vis.find({x,y-1})==vis.end()){
                                d--;
                               
                                bfs.push({{x,y-1},dep+1});
                                vis.insert({x,y-1});
                            }
                        }

                    }

                    if(y+1<m){
                        if(grid[x][y+1]==1){
                            if(vis.find({x,y+1})==vis.end()){
                                 d--;
                                  
                                 bfs.push({{x,y+1},dep+1});
                                 vis.insert({x,y+1});
                            }
                        }

                    }
                }
            }
                 
        }
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
              //  cout<<max_time[i][j]<<" ";
                ans=max(ans,max_time[i][j]);
                if(ans==INT_MAX)return -1;
            }
           // cout<<endl;
        }
        return ans;
    }
};
