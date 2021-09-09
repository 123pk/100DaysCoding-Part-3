/*
Platform :- Codeforces
Contest :- Codeforces Round 660 Div 2
Hint :- DP,prefix sum 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    long long A[n];
    vector<long long>sum(k);
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    
    sort(A,A+n);
    long long pref[n];
    long long dp[n];
    for(int i=0;i<n;++i){
        if(i==0)pref[i]=A[i];
        else pref[i]=pref[i-1]+A[i];
    }
    
    for(int i=0;i<n;++i){
        if(i<k){
          dp[i]=pref[i];   
        }
        else{
            dp[i] = pref[i]+dp[i-k];
            
        }
        cout<<dp[i]<<" ";
    }
    cout<<"\n";
}
