/*
Platform :- CSES
Approach :- store all the index wher you have '.' in grid , now perform bfs and move in neighbouring cells having'.' and mark them visited so you don't visit them 
            multiple times , once the bfs is completed and you cannot move , itterate through the index until you find any unvisited index and increment your count 
            by 1 after each bfs.
            
            Tips :- The time limit is tight so as avoid using 'set' in c++ , use '2d array' for maintaining info of visited cells. 
*/
#include<bits/stdc++.h>
using namespace std;

#define x temp.first
#define y temp.second
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    
    vector<pair<int,int>>temp;
    char ch[n][m];
    int vis[n][m];
    int d=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>ch[i][j];
            vis[i][j]=0;
            if(ch[i][j]=='.'){
                d++;
                temp.push_back({i,j});
            }
            
        }
    }
    
    if(d==(n*m)){
        cout<<1<<"\n";
        exit(0);
    }
    
    int ans=0;
    
    queue<pair<int,int>>bfs,xx;
    for(int i=0;i<temp.size();++i){
        
        if(vis[temp[i].first][temp[i].second]==0){
            vis[temp[i].first][temp[i].second]=1;
            
            bfs.push(temp[i]);
            
            while(!bfs.empty()){
                int c=bfs.size();
                
                for(int j=0;j<c;++j){
                    pair<int,int>temp = bfs.front();
                    bfs.pop();
                    
                   // int x = temp.first;
                   // int y = temp.second;
                    
                    //goind down if possible
                    if((x+1)<n){
                        if(ch[x+1][y]=='.'){
                            if(vis[x+1][y]==0){
                                bfs.push({x+1,y});
                                vis[x+1][y]=1;
                            }
                        }
                    }
                    
                    //going up if possible
                    if((x-1)>=0){
                        if(ch[x-1][y]=='.'){
                            if(vis[x-1][y]==0){
                                bfs.push({x-1,y});
                                vis[x-1][y]=1;
                            }
                        }
                    }
                    
                    //going right if possible
                    if((y+1)<m){
                        if(ch[x][y+1]=='.'){
                            if(vis[x][y+1]==0){
                                bfs.push({x,y+1});
                                vis[x][y+1]=1;
                            }
                        }
                    }
                    
                    //going left 
                    if((y-1)>=0){
                        if(ch[x][y-1]=='.'){
                            if(vis[x][y-1]==0){
                                bfs.push({x,y-1});
                                vis[x][y-1]=1;
                            }
                        }
                    }
                }
            }
            ans++;
            bfs=xx;
        }
    }
    
    cout<<ans<<"\n";
}
