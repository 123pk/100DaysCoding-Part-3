/*
Platform :- Atcoder
Contest :- Atcoder Beginner contest 208
Approach :- if 'k' is greater than 'n' then each one will get (k/n) candies , the remaining k%n candies will be distributed to first smallest (k%n) values
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<long long,int>&P,pair<long long,int>&Q){
    return P.second<Q.second;
}

int main(){

     long long k;
     int n;
     cin>>n>>k;
     
     long long A[n];
     vector<pair<long long,int>>P;
     for(int i=0;i<n;++i){
         cin>>A[i];
         P.push_back({A[i],i});
     }
     
     sort(P.begin(),P.end());
     long long z1=k/n;
     long long x=k%n;
     for(int i=0;i<n;++i){
         if(i<x)P[i].first=z1+1;
         else P[i].first=z1;
     }
     
     sort(P.begin(),P.end(),comp);
     
     for(auto &x:P){
         cout<<x.first<<" \n";
     }
 
     
}
