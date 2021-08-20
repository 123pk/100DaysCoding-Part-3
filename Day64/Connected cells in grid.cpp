/*
Platform :- Hackerrank
Approach :- BFS on all the cells contanining 1's and are not visited yet in all 8 directions possible and maintain the count of total cells that are connected , reuturn max count 
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>A(n,vector<int>(m));
    vector<pair<int,int>>temp;
    int f=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>A[i][j];
            if(A[i][j]){
                f++;
                temp.push_back({i,j});
            }
        }
    }
    
    if(f==0)cout<<0<<"\n";
    else if(f==(m*n))cout<<f<<"\n";
    else{
        int ans=0;
        set<pair<int,int>>used;
        for(int i=0;i<temp.size();++i){
            if(used.find(temp[i])==used.end()){
                used.insert(temp[i]);
                
                queue<pair<int,int>>bfs;
                int c=1;
                bfs.push(temp[i]);
                
                while(!bfs.empty()){
                    int sz = bfs.size();
                    for(int i=0;i<sz;++i){
                        pair<int,int>z = bfs.front();
                        bfs.pop();
                        int x = z.first;
                        int y = z.second;
                        
                        //now move in all possible 8 directions which are not visited
                        //left
                        if((y-1)>=0){
                            if(A[x][y-1]==1){
                                if(used.find({x,y-1})==used.end()){
                                    used.insert({x,y-1});
                                    c++;
                                    bfs.push({x,y-1});
                                }
                            }
                            
                        }
                        
                        //right
                        if((y+1)<m){
                            if(A[x][y+1]==1){
                                if(used.find({x,y+1})==used.end()){
                                    used.insert({x,y+1});
                                    c++;
                                    bfs.push({x,y+1});
                                }
                            }
                            
                        }
                        
                        //up
                        if((x-1)>=0){
                            if(A[x-1][y]==1){
                                if(used.find({x-1,y})==used.end()){
                                    used.insert({x-1,y});
                                    c++;
                                    bfs.push({x-1,y});
                                }
                            }
                            
                        }
                        
                        //down
                        if((x+1)<n){
                            if(A[x+1][y]==1){
                                if(used.find({x+1,y})==used.end()){
                                    used.insert({x+1,y});
                                    c++;
                                    bfs.push({x+1,y});
                                }
                            }
                            
                        }
                        
                        //left up
                        if((y-1)>=0 && (x-1)>=0){
                            if(A[x-1][y-1]==1){
                                if(used.find({x-1,y-1})==used.end()){
                                    used.insert({x-1,y-1});
                                    c++;
                                    bfs.push({x-1,y-1});
                                }
                            }
                            
                        }
                        
                        //left down
                        if((y-1)>=0 && (x+1)<n){
                            if(A[x+1][y-1]==1){
                                if(used.find({x+1,y-1})==used.end()){
                                    used.insert({x+1,y-1});
                                    c++;
                                    bfs.push({x+1,y-1});
                                }
                            }
                            
                        }
                        
                        //right up
                        if((y+1)<m && (x-1)>=0){
                            if(A[x-1][y+1]==1){
                                if(used.find({x-1,y+1})==used.end()){
                                    used.insert({x-1,y+1});
                                    c++;
                                    bfs.push({x-1,y+1});
                                }
                            }
                        }
                        
                        //right down
                        if((y+1)<m && (x+1)<n){
                            if(A[x+1][y+1]==1){
                                if(used.find({x+1,y+1})==used.end()){
                                    used.insert({x+1,y+1});
                                    c++;
                                    bfs.push({x+1,y+1});
                                }
                            }
                            
                        }
                    }
                }
                
                
                ans=max(ans,c);
            }
        }
        cout<<ans<<"\n";
    }
}
