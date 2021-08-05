/*
Platform :- CSES
Approach :- we do BFS as we need shortest path too and for each node we store parent of that node , remember parent of starting node is  that node itself which is our termination
           condition while backtracking . As soon as we reached 'B' our destination we start our backtracking and add 'U','L','R' and 'D' accordingy .
           At the end reverse the answer string you got as we backtracked.
*/
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    
     
    char ch[n][m];
    vector<vector<pair<int,int>>>vis(n,vector<pair<int,int>>(m,{-1,-1}));
    int d=0;
    pair<int,int>start,end;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>ch[i][j];
        
            if(ch[i][j]=='A'){
                start = {i,j};
                vis[i][j]={i,j};
            }
            else if(ch[i][j] =='B'){
                end = {i,j};
            }
        }
    }
    
    string ans;
    
    queue<pair<int,int>>bfs;
    bfs.push(start);
    pair<int,int>z={-1,-1};
    int f=0;
    
    //doing bfs
    while(!bfs.empty()){
        int c = bfs.size();
        for(int i=1;i<=c;++i){
            
             pair<int,int> temp = bfs.front();
            bfs.pop();
            
            int x = temp.first;
            int y = temp.second;
            
            
            //goind down if possible
                    if((x+1)<n){
                        if(ch[x+1][y]=='.'){
                            if(vis[x+1][y]==z){
                                bfs.push({x+1,y});
                                vis[x+1][y]=temp;
                            }
                        }
                        else{
                            if(ch[x+1][y]=='B'){
                                f=1;
                                vis[x+1][y] = temp;
                                break;
                            }
                        }
                    }
                 
                    //going up if possible
                    if((x-1)>=0){
                        if(ch[x-1][y]=='.'){
                            if(vis[x-1][y]==z){
                                 bfs.push({x-1,y});
                                vis[x-1][y]=temp;
                            }
                        }
                        else{
                            if(ch[x-1][y]=='B'){
                                f=1;
                                vis[x-1][y] = temp;
                                break;
                            }
                        }
                    }
                    
                    //going right if possible
                    if((y+1)<m){
                        if(ch[x][y+1]=='.'){
                            if(vis[x][y+1]==z){
                                 bfs.push({x,y+1});
                                vis[x][y+1]=temp;
                            }
                        }
                        else{
                            if(ch[x][y+1]=='B'){
                                f=1;
                                vis[x][y+1] = temp;
                                break;
                            }
                        }
                    }
                    
                    //going left 
                    if((y-1)>=0){
                        if(ch[x][y-1]=='.'){
                            if(vis[x][y-1]==z){
                                 bfs.push({x,y-1});
                                vis[x][y-1]=temp;
                            }
                        }
                        else{
                            if(ch[x][y-1]=='B'){
                                f=1;
                                vis[x][y-1] = temp;
                                break;
                            }
                        }
                    }
                     
        }
        if(f)break;
    }
     
   
    if(f==0)cout<<"NO\n";
    else{
        cout<<"YES\n";
        
        //backtracking or going to parent node and simultaneously adding the path 'L' or 'R' , 'U' or 'D'
        while(1){
            pair<int,int>temp=vis[end.first][end.second];
             
            if((temp.first-end.first)==1){
                ans+='U';
            }
            else if((temp.first-end.first)==-1){
                ans+='D';
            }
            else if(temp.second-end.second==1){
                ans+='L';
            }
            else{
                ans+='R';
            }
            
            if(temp==start)break;
            end=temp;
        }
        
        //we backtrack so we need to reverse
        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<"\n";
        cout<<ans<<"\n";
    }
     
}
