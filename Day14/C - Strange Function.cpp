/*
Platform :- Codeforces
Contest :- Codeforces Round 729 Div 2
Approach :- we find the product of values from 1.. to i by and also removing GCD values we do so by the time this values is less than 'n' and add ans+(n/this_value) 
            take care of mod also
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
   int t;
   cin>>t;
   
   while(t--){
       long long n;
       cin>>n;
       
       long long mod=1e9+7;
       
       long long z=1;
       long long ans=n%mod;
       for(long long i=1; ;++i){
           z=(z/__gcd(z,i))*i;
           if(z>n)break;
           ans+=(n/z);
           ans%=mod;
       }
       cout<<ans<<"\n";
   }
}
