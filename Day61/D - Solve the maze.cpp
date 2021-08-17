/*
Platform :- Codeforces 
Contest :- Codefroces Round 648 Div 2
Approach :- We will first surround each 'B' (bad guys) with wall if there is an empty cell , and if there is a 'G' (good guy ) sharing border with 'B' then it is never possible
           and we print "No" else we now should be able to visit every node including 'bottom right cell' and all 'G' cells if we are able to do so we will print "Yes" else "No".
           --> We use bfs and check for all the four directions in both cases
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        char ch[n][m];
        int c=0;
        pair<int,int>start;
       vector<pair<int,int>>P;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>ch[i][j];
                if(ch[i][j]=='G'){
                    c++;
                    start = {i,j};
                }
                else if(ch[i][j]=='B'){
                    P.push_back({i,j});
                    //cout<<(i)<<" "<<j<<" "<<ch[i][j]<<endl;
                }
            }
        }
        
        //creating barriers
        set<pair<int,int>>used;
        int f=0;
        //cout<<P.size()<<" ";
        for(int i=0;i<P.size();++i){
            if(used.find(P[i])==used.end()){
                used.insert(P[i]);
                
                queue<pair<int,int>>bfs;
                bfs.push(P[i]);
                while(!bfs.empty()){
                    int d = bfs.size();
                    for(int i=0;i<d;++i){
                        pair<int,int>temp = bfs.front();
                        bfs.pop();
                        
                        int x = temp.first;
                        int y = temp.second;
                       
                        if((x+1)<n){
                            if(ch[x+1][y]=='.'){
                                if(used.find({x+1,y})==used.end()){
                                    used.insert({x+1,y});
                                    ch[x+1][y]='#';
                                }
                            }
                            else if(ch[x+1][y]=='G'){
                                
                                f=1;
                                break;
                            }
                            else if(ch[x+1][y]=='B'){
                                if(used.find({x+1,y})==used.end()){
                                    used.insert({x+1,y});
                                    bfs.push({x+1,y});
                                }
                            }
                        }
                        
                        if((x-1)>=0){
                            if(ch[x-1][y]=='.'){
                                if(used.find({x-1,y})==used.end()){
                                    used.insert({x-1,y});
                                    ch[x-1][y]='#';
                                }
                            }
                            else if(ch[x-1][y]=='G'){
                                f=1;
                                break;
                            }
                            else if(ch[x-1][y]=='B'){
                                if(used.find({x-1,y})==used.end()){
                                    used.insert({x-1,y});
                                    bfs.push({x-1,y});
                                }
                            }
                        }
                        
                        if((y+1)<m){
                            if(ch[x][y+1]=='.'){
                                if(used.find({x,y+1})==used.end()){
                                    used.insert({x,y+1});
                                    ch[x][y+1]='#';
                                }
                            }
                            else if(ch[x][y+1]=='G'){
                                f=1;
                                break;
                            }
                            else  if(ch[x][y+1]=='B'){
                                if(used.find({x,y+1})==used.end()){
                                    used.insert({x,y+1});
                                    bfs.push({x,y+1});
                                }
                            }
                        }
                        
                        if((y-1)>=0){
                            if(ch[x][y-1]=='.'){
                                if(used.find({x,y-1})==used.end()){
                                    used.insert({x,y-1});
                                    ch[x][y-1]='#';
                                }
                            }
                            else if(ch[x][y-1]=='G'){
                                f=1;
                                break;
                            }
                            else  if(ch[x][y-1]=='B'){
                                if(used.find({x,y-1})==used.end()){
                                    used.insert({x,y-1});
                                    bfs.push({x,y-1});
                                }
                            }
                        }
                    }
                    if(f)break;
                }
                if(f)break;
            }
        }
        
        if(f){
            cout<<"No\n";
            continue;
        }
      //  cout<<" * ";
        //if all our good people can reach the end
         
            //int f=0;
          if(c){  
             // cout<<c<<"--> ";
              
              set<pair<int,int>>used1;
              
            pair<int,int>end = {n-1,m-1};
            used1.insert(start);
            queue<pair<int,int>>bfs;
            bfs.push(start);
            c--;
            while(!bfs.empty()){
                int d = bfs.size();
                for(int j=0;j<d;++j){
                    pair<int,int>temp = bfs.front();
                    bfs.pop();
                    
                     
                    
                    int x =temp.first;
                    int y = temp.second;
                    
                    if(temp==end){
                        f=1;
                    }
                    //checking all four direction
                    
                    if((x+1)<n){
                        if((ch[x+1][y]=='G' || ch[x+1][y]=='.') && used1.find({x+1,y})==used1.end()){
                            if(ch[x+1][y]=='G')c--;
                            used1.insert({x+1,y});
                            bfs.push({x+1,y});
                        }
                    }
                    
                    if((x-1)>=0){
                        if((ch[x-1][y]=='G' || ch[x-1][y]=='.') && used1.find({x-1,y})==used1.end()){
                            used1.insert({x-1,y});
                            bfs.push({x-1,y});
                            if(ch[x-1][y]=='G')c--;
                        }
                    }
                    
                    if((y+1)<m){
                        if((ch[x][y+1]=='G' || ch[x][y+1]=='.') && used1.find({x,y+1})==used1.end()){
                            used1.insert({x,y+1});
                            bfs.push({x,y+1});
                            if(ch[x][y+1]=='G')c--;
                        }
                    }
                    
                    if((y-1)>=0){
                        if((ch[x][y-1]=='G' || ch[x][y-1]=='.') && used1.find({x,y-1})==used1.end()){
                            used1.insert({x,y-1});
                            bfs.push({x,y-1});
                            if(ch[x][y-1]=='G')c--;
                        }
                    }
                    
                }
                 
            }
           // cout<<c<<" ";
            if(f && c==0)cout<<"Yes\n";
            else cout<<"No\n";
            continue;
          //  cout<<c<<" ";
          }
            
                cout<<"Yes\n";
             
         
    }
}
