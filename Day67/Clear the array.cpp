/*
Platform :- Codechef
Contest :- Codechef August Cookoff 2021
Approach :- we can see that making pair is efficient if and only if sum of pair of (A[i] + A[j] > x) , we sort the array and start from greatest values and if the pair of two
            greatest values is greater than 'x' and 'k' is not zero we use add 'x' to our answer and decrement 'k--' else we add individual values in answer.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        long long x;
        cin>>n>>k>>x;
        
        long long A[n];
        for(int i=0;i<n;++i){
            cin>>A[i];
        }
        int f=0;
        long long ans=0;
        sort(A,A+n,greater<long long>());
        for(int i=0;i<n;i++){
            if(i==n-1 || f || k==0){
                ans+=A[i];continue;
            }
            long long temp = A[i]+A[i+1];
            if(temp<x){
                ans+=A[i];
                f=1;
            }
            else{
                ans+=x;
                k--;
                i++;
                 
            }
        }
        cout<<ans<<"\n";
    }
}
