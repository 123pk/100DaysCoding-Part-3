/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 213
Approach :- sort A and B separately and for pair A[i] and B[i] and store the rank of A[i] and B[i] when you sort them and print the rank.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     long long h,w;
     int n;
     cin>>h>>w>>n;
     
     vector<long long>A(n),B(n);
     vector<pair<long long,long long>>z;
     for(int i=0;i<n;++i){
         cin>>A[i]>>B[i];
         z.push_back({A[i],B[i]});
     }
     
     sort(A.begin(),A.end());
     sort(B.begin(),B.end());
     
     
     set<long long>unq_r,unq_c;
     for(auto &x:A)unq_r.insert(x);
     for(auto &x:B)unq_c.insert(x);
     
     int c=1;
     map<long long,int>P,Q;
     for(auto &x:unq_r){
         P[x]=c;
         c++;
     }
     
     c=1;
     for(auto &x:unq_c){
         Q[x]=c;
         c++;
     }
     
     for(int i=0;i<n;++i){
         int r = P[z[i].first];
         int c= Q[z[i].second];
         cout<<(r)<<" "<<(c)<<"\n";
     }

      
}
