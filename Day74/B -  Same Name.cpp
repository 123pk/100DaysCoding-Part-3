/*
Platform :- Atcoder 
Contest :- Atcoder Beginner Contest 216
Approach :- we can use set of pair to store the first and last name in pair and if we get a value which is already in set we print yes else no.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     
     int f=0;
     set<pair<string,string>>P;
     for(int i=0;i<n;++i){
         string s,t;
         cin>>s>>t;
         
         if(P.find({s,t})!=P.end()){
             f=1;
         }
         else{
             P.insert({s,t});
         }
     }
     
     if(f)cout<<"Yes\n";
     else cout<<"No\n";
}
