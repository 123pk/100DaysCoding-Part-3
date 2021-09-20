/*
Platform :- Codechef
Contest :- Codechef COOK OFF September 2021
Approach :- we cannot convert 'p' to string 's' if p contains only one type of character either '0' or '1' else we can convert 's' to 'p'
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s,p;
        cin>>s>>p;
        
        if(s==p)cout<<"YES\n";
        else{
            int c=0,d=0;
            for(auto x:p){
                if(x=='1')c++;
                else d++;
            }
            if(c&&d)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
