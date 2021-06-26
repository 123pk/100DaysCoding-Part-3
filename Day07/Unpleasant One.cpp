/*
Platform :- Codechef
Contest :- June Lunctime 2021
Problem :- Unpleasant One (UNONE)
Approach :- It is productive to have all even numbers together and before odd numbers ,so print all the even numbers first then odd numbers
*/
#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,long long>&P,pair<int,long long>&Q){
    return P.first<Q.first;
}

int main(){
     int t;
     cin>>t;
     
     while(t--){
         int n;
         cin>>n;
         
         long long A[n];
         //int c=0;
         vector<long long>odd,even,P;
         for(int i=0;i<n;++i){
             cin>>A[i];
             if(A[i]%2)odd.push_back(A[i]);
             else even.push_back(A[i]);
         }
         
         //sort(odd.begin(),odd.end(),greater<long long>());
         //sort(even.begin(),even.end());
         
         int c=odd.size();
         int d=n-c;
         
          
         for(auto &x:even)cout<<x<<" ";
         for(auto &x:odd)cout<<x<<" ";
         cout<<endl;
         
     }
}
