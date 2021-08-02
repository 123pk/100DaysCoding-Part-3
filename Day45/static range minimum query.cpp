/*
Platform :- CSES
Approach :- As we have static queries we will sparse table to find the min value in given range .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     
        int n,q;
        cin>>n>>q;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
   
        
        
        long long sparse_table[n][25];
        for(int i=0;i<n;++i){
            sparse_table[i][0]=A[i];
        }
        
        // we completely filled our sparse table with min of range
        for(int i=1;i<=25;++i){
            for(int j=0;j+(1<<i)<=n;++j){
                sparse_table[j][i] = min( sparse_table[j][i-1] ,sparse_table[j+(1<<i-1)][i-1]);
            }
        }
        
        
        for(int i=0;i<q;++i){
            int l,r;
            cin>>l>>r;
            
            l--;
            r--;
            
            int h=floor(log2(r-l+1));
            long long ans=min(sparse_table[l][h],sparse_table[r-(1<<h)+1][h]);
            cout<<ans<<"\n";
        }
        
    
}
