/*
Platform :- Codeforces
Contest :- Codeforces Round 741 Div 2
Approach :- let x = (r/2)+1 , if x>=l then ans = r%x else ans = r%l
*/
#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    
    while(t--){
        long long l,r;
        cin>>l>>r;
        
        long long temp=r/2;
        temp++;
        long long ans=0;
        if(l<=temp){
            ans+=(r%temp);
        }
        else{
            ans+= r%l;
        }
        cout<<ans<<"\n";
    }
}
