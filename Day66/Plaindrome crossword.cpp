/*
Platform :- Codingcompetitionwithgoogle
Contest :- Google Kickstart Round E 2021
Approach :- Do bfs on all the alphabetical cells in grid and find if it can be part of a palindrome vertically or  horizontally and fill the mirror side ( Opposite) if empty
            and push that cell index in bfs queue .
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<char,int>&P,pair<char,int>&Q){
    return P.second>Q.second;
}

int main(){
    int t;
    cin>>t;
    
    for(int z=1;z<=t;++z){
        cout<<"Case #"<<z<<": ";
        
        int n,m;
        cin>>n>>m;
        
        char ch[n][m];
        queue<pair<int,int>>bfs;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>ch[i][j];
                if(ch[i][j]!='.' && ch[i][j]!='#')bfs.push({i,j});
            }
        }
        
        
        //I am thinking of bfs on each of the cell where the value is not # and find another value if palindrome is formed
        set<pair<int,int>>vis;
        int ans=0;
        while(!bfs.empty()){
            int c = bfs.size();
            for(int i=0;i<c;++i){
                pair<int,int>temp = bfs.front();
                bfs.pop();
                
                int x = temp.first;
                int y = temp.second;
                
                //going vertically up 
                int len=0;
                int start = x,end=x;
                for(int j = x;j>=0;--j){
                    if(ch[j][y]=='#')break;
                    len++;
                    start = j;
                }
                //going down
                for(int j=x+1;j<n;++j){
                    if(ch[j][y]=='#')break;
                    len++;
                    end = j;
                }
                
                // the min distance from any end
                int dis = min(abs(start-x),abs(end-x));
                if(ch[start+dis][y]=='.'){
                    ans++;
                    ch[start+dis][y] = ch[x][y];
                    bfs.push({start+dis,y});
                }
                
                if(ch[end-dis][y]=='.'){
                    ans++;
                    ch[end-dis][y] = ch[x][y];
                    bfs.push({end-dis,y});
                }
                
                //horizonatlly left 
             
                start = y,end=y;
                for(int j = y;j>=0;--j){
                    if(ch[x][j]=='#')break;
                    start = j;
                }
                //going right
                for(int j=y+1;j<m;++j){
                    if(ch[x][j]=='#')break;
                    end = j;
                }
                
                 // the min distance from any end
                  dis = min(abs(start-y),abs(end-y));
                if(ch[x][start+dis]=='.'){
                    ans++;
                    ch[x][start+dis] = ch[x][y];
                    bfs.push({x,start+dis});
                }
                
                if(ch[x][end-dis]=='.'){
                    ans++;
                    ch[x][end-dis] = ch[x][y];
                    bfs.push({x,end-dis});
                }
            }
        }
        
        cout<<ans<<"\n";
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cout<<ch[i][j];
            }
            cout<<"\n";
        }
    }
}
