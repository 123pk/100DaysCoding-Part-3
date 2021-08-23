/*
Platform :- Codechef
Contest :- Codechef August Cook off
Approach :- We can easily see that the maximum length of such subarray is the count of most frequent element , let 'x' be the maximum frequency of some element in array
            then we need to remove (n-x) elements, take care of the case when we have x=1, in that case we need one more element to make pair.
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
        map<long long,int>P;
        int mx=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            P[A[i]]++;
            mx=max(mx,P[A[i]]);
        }
        
        if(n<=2)cout<<0<<"\n";
        else if(mx==1)cout<<(n-2)<<"\n";
        else cout<<(n-mx)<<"\n";
    }
}
