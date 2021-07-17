/*
Platform :- Codeforces
Contest :- Codeforces Round #733 (Div. 1 + Div. 2, based on VK Cup 2021 - Elimination (Engine))
Approach :- the max value of digit in 'n'
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        int ans=0;
        for(auto &x:s){
            ans=max(ans,x-'0');
        }
        cout<<ans<<"\n";
    }
    
}
