/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 213
Approach :- It is simple property of xor ( X xor Y) = Z then ( X xor Z) = Y and we were given X and Z, we needed Y.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    
    long long ans=a xor b;
    cout<<ans<<"\n";
}
