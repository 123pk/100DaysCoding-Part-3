/*
Platform :- Codeforces 
Contest :- Codeforces Round 321 Div 2
Approach :- We will do BFS on tree and if at any point we have more than 'm' nodes we will not visit it childs and if we managed to get to leaf we will increment our answer by 1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    m++;
    
    vector<int>Q(n);
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        Q[i]=x;
    }
    
    vector<int>P[n];
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        
        u--;
        v--;
        P[u].push_back(v);
        P[v].push_back(u);
    }
    
    int ans=0;
    set<int>visited;
    queue<pair<int,int>>R;
    R.push({0,Q[0]});
    visited.insert(0);
    
    while(!R.empty()){
        int c=R.size();
        for(int i=1;i<=c;++i){
            pair<int,int>temp=R.front();
            R.pop();
            int x=temp.first;
            int y=temp.second;
            
            
            int f=0;
            for(int j=0;j<P[x].size();++j){
                if(visited.find(P[x][j])==visited.end()){
                    f=1;
                    visited.insert(P[x][j]);
                }
                else continue;
                
                int l=Q[P[x][j]];
                if(l){
                    if((l+y)>=m){
                        
                        continue;
                    }
                    else{
                         
                            R.push({P[x][j],y+1});
                          //  visited.insert(P[x][j]);
                         
                    }
                }
                else{
                     
                        R.push({P[x][j],0});
                        //visited.insert(P[x][j]);
                    
                }
            }
            if(f==0)ans++;
        }
    }
    
    
    cout<<ans<<endl;
}
