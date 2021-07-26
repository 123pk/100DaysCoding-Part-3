/*
Platform :- Codeforces
Contest :- Codeforces Round 498 Div 3
Approach :- if A[i] is even then change A[i] to A[i]-1 for all ( 1 <= i <= n) 
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     int n;
     cin>>n;
     
     long long A[n];
     long long B[n];
     for(int i=0;i<n;++i){
         cin>>A[i];
         
     }
     
    for(auto &x:A){
        if(x%2==0)cout<<(x-1)<<" ";
        else cout<<x<<" ";
    }
    cout<<endl;
     
     
}
