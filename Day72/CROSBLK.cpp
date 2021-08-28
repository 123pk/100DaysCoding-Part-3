/*
Platform :- Codechef
Contest :- Codechef August Lunctime 2021
Approach :- Analyse the problem you will find we need to find longest increasing subsequence including the last element, moving from end to front . We maintain a variable which stores
            the max element till now and we traverse from behind to front and if we find any element greater than current max then we increment our answer as it is the the place from
            where we can reach the last element , if we are at first element we will check if ( current_max > A[i]) then we can never reach out last element else we can reach and increment 
            your answer by 1
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
        int f=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        reverse(A,A+n);
        long long mx=A[0];
        int ans=0;
        for(int i=1;i<n;++i){
            if(i==n-1){
                if(mx>A[i]){
                    f=1;
                }
                else ans++;
            }
            else{
                if(mx<A[i]){
                    ans++;
                    mx=A[i];
                }
                 
            }
        }
        
        if(f)cout<<"-1\n";
        else{
             
            cout<<ans<<"\n";
        }
    }
}
