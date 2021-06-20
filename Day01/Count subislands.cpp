/*
Platform :- Leetcode
Problem :- Count sub islands
Contest :- Weekly contest 246
Approach :-  we do bfs and visit all the nodes in all 4 directions if value of grid 2 at current index is '1' and is not visited , if all the nodes that we visited are island in
            grid 1 also then we incrment our count by one
*/

class Solution {
public:
    int countSubIslands(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        int n=A.size();
        int m=A[0].size();
        vector<pair<int,int>>P;
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(B[i][j])P.push_back({i,j});
            }
        }
        
        set<pair<int,int>>visited;
        int ans=0;
        for(int i=0;i<P.size();++i){
            if(visited.find(P[i])==visited.end()){
                 int f=0;
                  if(A[P[i].first][P[i].second]==0){
                      f=1;
                  }
                //bfs 
                queue<pair<int,int>>Q;
                Q.push(P[i]);
                visited.insert(P[i]);
                
                while(!Q.empty()){
                    int c=Q.size();
                    for(int j=1;j<=c;++j){
                        pair<int,int>temp=Q.front();
                        Q.pop();
                        int x=temp.first;
                        int y=temp.second;
                       
                        //checking if we can go downwards
                        if((x+1)<n){
                            if(B[x+1][y]==1){
                                    //marking this index to visited
                                    if(visited.find({x+1,y})==visited.end()){
                                       Q.push({x+1,y});
                                       visited.insert({x+1,y});
                                    }
                                //if this index is not an island in grid1
                                if(A[x+1][y]==0){
                                    f=1;
                                }
                            }
                        }
                                
                        //checking if we can go upwards
                        if((x-1)>=0){
                            if(B[x-1][y]==1){
                                    //marking this index to visited
                                    if(visited.find({x-1,y})==visited.end()){
                                        Q.push({x-1,y});
                                        visited.insert({x-1,y});
                                    }
                                if(A[x-1][y]==0){
                                    f=1;
                                }
                            }
                        }
                                
                         //checking if we can go right
                        if((y+1)<m){
                            if(B[x][y+1]==1){
                                     //marking this index to visited
                                    if(visited.find({x,y+1})==visited.end())
                                    {
                                        Q.push({x,y+1});
                                        visited.insert({x,y+1});
                                    }
                                if(A[x][y+1]==0){
                                    f=1;
                                }
                            }
                        }
                        
                        //checking if we can go to left
                        if((y-1)>=0){
                            if(B[x][y-1]==1){
                                    //marking this index to visited
                                    if(visited.find({x,y-1})==visited.end()){
                                        Q.push({x,y-1});
                                        visited.insert({x,y-1});
                                    }
                                if(A[x][y-1]==0){
                                    f=1;
                                }
                            }
                        }
                    }
                    
                }
                
             //if all the index that we visited are island in grid 1 also then we increment our count
                if(f==0){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
