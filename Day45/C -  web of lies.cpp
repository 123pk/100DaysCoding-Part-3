/*
Platform :- Codeforces
Contest :- Codeforces Round 736 Div 2
Appraoch :- create a graph from input such that there is outgoing edge from ( min(u,v) towards ---> max(u,v) )
           --> then we count number edgest that have atleast one outgoing edge 
           --> now we start taking queries
           Query type 1 :- when we have new edge we create edge going from min value to max and increment out edges count for min value , if value ==1,
                           it means we got one more node with aleast outgoing edge
           Query type 2 :- we will decrement count of no of outgoing edges for min value of ( u,v ) if value becomes '0' we decrease count of number of nodes with atleast
                           one outgoing edge by 1.
           Query type 3 :- print ( n - count_of_nodes_with_atleast_one_edge )
           
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     
         int n,m;
         cin>>n>>m;
         
         vector<int>P[n];
         for(int i=0;i<m;++i){
             int u,v;
             cin>>u>>v;
             u--;
             v--;
             P[min(u,v)].push_back(max(u,v));
         }
         
         map<int,int>Q;
         int d=0;
         for(int i=0;i<n;++i){
             Q[i]=P[i].size();
             if(Q[i])d++;
         }
         
         int q;
         cin>>q;
         for(int i=0;i<q;++i){
             int x;
             cin>>x;
             
             if(x==1){
                 int u,v;
                 cin>>u>>v;
                  u--;
                 v--;
                 
                 Q[min(u,v)]++;
                 if(Q[min(u,v)]==1)d++;
             }
             else if(x==2){
                 int u,v;
                 cin>>u>>v;
                 
                 u--;
                 v--;
                 Q[min(u,v)]--;
                 if(Q[min(u,v)]==0)d--;
                 
             }
             else{
                 cout<<(n-d)<<"\n";
             }
         }
          
         
    
}
