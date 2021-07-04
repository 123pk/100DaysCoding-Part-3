/*
Platform :- Atcoder
Problem :- A - Rolling dice
Approach :- For a given 'n' if we have value between n and n*6 inclusive then we can get that value else not 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    
    long long low=n;
    long long h=n*6;
    
    if(k<=h && low<=k)cout<<"Yes\n";
    else cout<<"No\n";
}
