/*
Platform :- Codeforces
Contest :- Codeforces Round 729 Div 2
Approach :- if number of even and odd terms are equal then it is possible else not
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        long long A[2*n];
        int c=0;
        for(int i=0;i<(2*n);++i){
            cin>>A[i];
            if(A[i]%2)c++;
        }
        
        
        if(n==c)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
