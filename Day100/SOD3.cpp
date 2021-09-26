/*
Platform:- Codechef
Contest :- Codechef September Lunch time
Approach :- Find number of values divisble by 3 till l-1 and no of values divisible by 3 upto r and absolute difference gives us the number of values divisible by 3 in range [l,r]
*/
#include<bits/stdc++.h>
using namespace std;

 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long l,r;
        cin>>l>>r;
        
        long long ans=r/3;
        long long z=(l-1)/3;
        ans=(ans-z);
         
        cout<<ans<<"\n";
    }
}
