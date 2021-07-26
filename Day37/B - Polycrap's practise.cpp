/*
Platform :- Codeforces
Contest :- Codeforces Round 498 Div 3
Approach :- store all index of occurence of each element in array, sort the array then choose the 'k' greatest element find its sum and their index respectively
           sort the index in increasing order then find the size of each subarray formed 
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
     int n,k;
     cin>>n>>k;
     
     long long A[n];
     map<long long,vector<int>>P;
     for(int i=0;i<n;++i){
         cin>>A[i];
         P[A[i]].push_back(i+1);
     }
     
     sort(A,A+n,greater<long long>());
     vector<int>ans;
     long long tot=0;
     for(int i=0;i<k;++i){
         tot+=A[i];
         ans.push_back(P[A[i]][0]);
         P[A[i]].erase(P[A[i]].begin());
     }
     ans.push_back(0);
     sort(ans.begin(),ans.end());
     
     cout<<(tot)<<"\n";
     for(int i=1;i<ans.size();++i){
       int d=0;
       if(i==ans.size()-1)d+=n-ans[i];
        cout<<((ans[i]-ans[i-1])+d)<<" ";
     }
     cout<<"\n";
     
}
