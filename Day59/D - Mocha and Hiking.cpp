/*
Platform :- Codeforces
Contest :- Codeforces Round 738 Div 2
Approach :- i) If A[0] = 1 , then we have a valid rount n+1 --> 1 --> 2-->3...->n  
            ii) If we A[i] = 1 and A[i-1] = 0 , then also we have a path 1--> 2-->3...->(i) --> (n+1) --> (i+1)-->...->n
            So we check first condition if 1st condition is not met we check for 2nd condition which will meet anyways as A[0] = 0 ,if we have all '0' we will have path betwee
            n --> n+1  so we will print 1..n+1 in that case

*/
#include<bits/stdc++.h>
using namespace std;
 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
         
        vector<int>A(n);
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        
        if(A[0]==1){
            cout<<(n+1)<<" ";
            for(int i=1;i<=n;++i)cout<<i<<" ";
            cout<<"\n";
            continue;
        }
        
        if(A[n-1]==0){
            for(int i=1;i<=n+1;++i){
                cout<<i<<" ";
            }
            cout<<"\n";
            continue;
        }
        
        int f=0;
        int start=0;
        for(int i=1;i<n;++i){
            if(A[i]==1 && A[i-1]==0){
               f=1;
                start=i-1;
              
                break;
            }
        }
        
        if(f==0){
            cout<<"-1\n";
            continue;
        }
        
        for(int i=0;i<n;++i){
            if(i==start){
                cout<<i+1<<" "<<n+1<<" ";
            }
            else cout<<(i+1)<<" ";
        }
        cout<<"\n";
    }
    
    
}
