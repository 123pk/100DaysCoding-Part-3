/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 215
Appraoch :- Find the prime numbers less than 10^5 then for each element of array find the prime factors of it and mark them , now run a loop on those prime numbers and 
            mark all their multiples also which are less than 'm' , now run a loop from 2 to 'm' and if it is not marked add it to your answer vector ,don't forget to add '1' in 
            it will be valid for each and every number as [ gcd( any_number , 1 ) = 1 ] 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<bool>Q(100001,true);
    
    
    
    for(int i=2;i*i<=100000;++i){
        if(Q[i]){
        for(int j=i*i;j<=100000;j+=i){
            Q[j]=false;
        }
        }
    }
    
    vector<int>unq;
    for(int i=1;i<=100000;++i){
        if(Q[i]){
            unq.push_back(i);
        }
    }
    
    
    int n,m;
    cin>>n>>m;
    
    int A[n];
    map<int,int>P;
    for(int i=0;i<n;++i){
        cin>>A[i];
        
         if(A[i]==1)continue;
        
         
         int val = A[i];
         if(Q[val]){
             P[val]++;
             continue;
         }
         
         int j=1;
         while(unq[j]<=val){
             while(val%unq[j]==0){
                 val/=unq[j];
                 P[unq[j]]++;
             }
             j++;
         }
        /**/
        //P[Q[A[i]]]++;
    }
    
    map<int,int>no;
  //  for(int i=0;i<15;++i)cout<<unq[i]<<" ";
  //  cout<<"\n";
    //ans.insert(1);
    for(int i=1;i<unq.size();++i){
        if(unq[i]>m)break;
        if(P[unq[i]]){
            for(int j=unq[i];j<=m;j+=unq[i]){
                no[j]++;
            }
        }
    }
    vector<int>ans;
    ans.push_back(1);
    for(int i=2;i<=m;++i){
        if(no[i]==0)ans.push_back(i);
    }
    
    cout<<ans.size()<<"\n";
    for(auto &x:ans)cout<<x<<"\n";
   // cout<<ans<<"\n";
    
}
