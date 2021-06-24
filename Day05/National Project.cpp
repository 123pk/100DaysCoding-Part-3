/*
Platform :- Codeforces 
Contest :-  Educational Codeforces Round 82 (Rated for Div. 2)
Problem :- Natinal Project
Approach :- this is complete math , you need to repair (n+1)/2 unit of highway, thing to notice that we need atleast 'n' days for completing construction.'
            Formulate the formulae
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        
        
        long long z=(a+1)/2;
        long long ans=0;
        
        if(z<=b){
            ans+=z;
        }
        else{
            if(z%b==0){
                ans+=((z/b)-1)*(c+b);
                ans+=b;
            }
            else{
                ans+=(z/b)*(c+b);
                ans+=(z%b);
            }
        }
        ans=max(a,ans);
        cout<<ans<<endl;
    }
}
