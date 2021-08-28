/*
Platform :- Codechef
Contest :- Codechef August Lunctime 2021
Approach :- we store all the indexes where max value occured and we will traverse through it and if ( idx >= k (1-based indexing)) then we can have (n+1 - i) contiguous 
            subsequences whose kth elemnt is max of array, we add that to our count
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        long long A[n];
        long long mx=0;
        map<long long,vector<int>>P;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]].push_back(i);
            mx=max(mx,A[i]);
        }
        
        vector<int>temp = P[mx];
        long long ans=0;
        for(int i=0;i<temp.size();++i){
            if((temp[i]+1)>=k){
                ans+=(n-temp[i]);
            }
        }
        
        cout<<ans<<"\n";
    }
}
