/*
Platform :- Codeforces
Contest :- Codeforces Educational Round 112
Approach :- if n is odd make n even n--> n+1 , as for n>6 we can acheive every even number and cost for acheiving is 15 if n<=6 and n*5/2 otherwise
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
        
        long long ans=0;
        //we can acces every even value >=6
        if(n%2==1)n+=1;
        
        if(n<=6)ans+=15;
        else ans+=(n/2)*5;
        
        cout<<ans<<"\n";
    }
}
