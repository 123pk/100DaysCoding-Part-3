/*
Platform :- Codeforces 
Contest :- Codeforces Round 738 Div 2
Appraoch :- Find all the disconnected components of graph and for mocha and diana store the starting node of each connected component in set and now traverse through both the 
            set and if the two values 'x' of mocha set and 'y' of diana set are not connected ,connect them and add the pair to your answer and respectively change the parent or
            or starting node
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
        int n;
        cin>>n;
        
        int m1,m2;
        cin>>m1>>m2;
        
        vector<int>A[n],B[n];
        for(int i=0;i<m1;++i){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            A[u].push_back(v);
            A[v].push_back(u);
        }
        
        for(int i=0;i<m2;++i){
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            B[u].push_back(v);
            B[v].push_back(u);
        }
        
        
        //bfs parts
        
       vector<int>temp(n),temp2(n);
         for(int i=0;i<n;++i){
           if(temp[i])continue;
           temp[i]=i+1;
           queue<int>P;
           P.push(i);
           
           while(!P.empty()){
               int c=P.size();
               for(int l=0;l<c;++l){
                   int z = P.front();
                   P.pop();
                   for(int j=0;j<A[z].size();++j){
                       
                       if(temp[A[z][j]]==0){
                          // cout<<A[z][j]<<" ---> "<<z<<endl;
                           temp[A[z][j]]=i+1;
                           P.push(A[z][j]);
                       }
                   }
               }
           }
        }
     //   cout<<endl;
        
        for(int i=0;i<n;++i){
           if(temp2[i])continue;
           temp2[i]=i+1;
           queue<int>P;
           P.push(i);
           while(!P.empty()){
               int c=P.size();
               for(int l=0;l<c;++l){
                   int z = P.front();
                   P.pop();
                   for(int j=0;j<B[z].size();++j){
                       if(temp2[B[z][j]]==0){
                           temp2[B[z][j]]=i+1;
                           P.push(B[z][j]);
                       }
                   }
               }
           }
        }
       
        set<int>Q,Q2;
        for(int i=0;i<n;++i){
         //   cout<<i+1<<" "<<temp[i]<<endl;
            Q.insert(temp[i]-1);
        }
        for(int i=0;i<n;++i){
           // cout<<(i+1)<<" "<<temp2[i]<<endl;
            Q2.insert(temp2[i]-1);
        }
        
        
        vector<pair<int,int>> ans;
        for(auto &x:Q){
            // cout<<x<<" ---> ";
            for(auto&y:Q2){
               // cout<<y<<" ";
                if(temp[temp[x]-1]!=temp[temp[y]-1] && temp2[temp2[x]-1]!=temp2[temp2[y]-1]){
                    temp[temp[x]-1] = temp[temp[y]-1] = min(temp[temp[x]-1],temp[temp[y]-1]);
                    temp2[temp2[x]-1] = temp2[temp2[y]-1] = min(temp2[temp2[x]-1],temp2[temp2[y]-1]);
                    ans.push_back({x,y});
                    //cout<<x<<" "<<y<<" \n";
                }
            }
         //   cout<<endl;
        }
        cout<<ans.size()<<"\n";
        for(auto &x:ans)cout<<x.first+1<<" "<<x.second+1<<"\n";
  
    
}
