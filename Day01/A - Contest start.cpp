/*
Platform :- Codeforces 
Contest :- Codeforces Round 727
Problem :- A - Contest 

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long temp=c/b;
        
        long long ans=0;
        if(a<temp){
             
            ans+=(a*(a-1))/2;
        }
        else{
            ans+=(a-temp)*temp;
            ans+=(temp*(temp-1))/2;
        }
        cout<<ans<<endl;
    }
}
