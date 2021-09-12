/*
Platform :- Codeforces
Contest :- Codeforces Global Round 16
Approach :- for given value of 'n' fill floor((n)/2) values with '0' and for rest of x = (n-(n+1)/2)+1 , we will generate sum 's' which is floor(s/x)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n,s;
        cin>>n>>s;
        
        long long z=(n+1)/2;
        z=(n-z)+1;
        long long val= s/z;
        cout<<val<<"\n";
    }
}
