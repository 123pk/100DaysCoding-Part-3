/*
Platform :- Codechef
Contest :- Codechef Cook off September 2021
Approach :- if there is only odd or even element in array then we print -1 else we print all the even elments first and then odd elements or vice versa.
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
        int c=0;
        vector<long long>odd,even;
        for(int i=0;i<n;++i){
            cin>>A[i];
            if(A[i]%2){
                c++;
                odd.push_back(A[i]);
            }
            else even.push_back(A[i]);
        }
        
        if(c==0||c==n)cout<<"-1\n";
        else{
            for(auto x:even)cout<<x<<" ";
            for(auto x:odd)cout<<x<<" ";
            cout<<"\n";
        }
    }
}
