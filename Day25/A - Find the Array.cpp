/*
Platform :- Codeforces
Contest :- Educational Round 111
Approach :- Ceil(sqrt(n))
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int ans=sqrt(n);
        int z=ans;
        z*=z;
        if(z!=n)ans++;
        cout<<ans<<"\n";
    }
}
