/*
Platform :- Codeforces 
Contest :- Codeforces Round 728 Div 2
Approach :- for a given n we can have value of (i+j) from (3 to 2*n-1), we will find the factors of each i from 3 to (2*n-1) and if we have two distinct factors such
            that sum of their indexes is equal to i then we increment our count.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[n];
        map<long long ,int>P,Q;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]=i+1;
            //Q[A[i]]=i+1;
        }
        
        long long ans=0;
       // set<pair<int,int>>Q;
        
        for(int i=3;i<(2*n);++i){
            for(int j=1;j*j<=i;++j){
                
                if(i%j==0){
                    if(i/j==j){
                        continue;
                    }
                    int temp=P[j]+P[i/j];
                    if(temp==i &&P[j] && P[i/j]){
                        //cout<<j<<" "<<(i/j)<<" check\n";
                        ans++;
                    }
                    
                }
            }
        }
        cout<<ans<<endl;
        
    }
}
