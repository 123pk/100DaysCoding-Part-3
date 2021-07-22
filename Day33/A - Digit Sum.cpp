/*
Platform :- Codeforces
Contest :- Harbour.Space Scholarship Contest 2021-2022 (open for everyone, rated, Div. 1 + Div. 2)
Approach :- there are always 'n/10' such values of 'x' except for case when last digit of 'n' is 9 , in this case we have 'n/10 +1'
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
         
            long long ans=n/10;
            if((n%10)==9)ans++;
            cout<<ans<<"\n";
        
    }
}
