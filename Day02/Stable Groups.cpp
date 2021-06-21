/*
Platform :- Codeforces 
Contest :- Codeforces Round 727 Div 2
Poblem :- C - Stable Groups
Approach :- It was a greedy problem where we need to greedily choose where to put random students
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   long long k,x;
   cin>>n>>k>>x;
   
   long long A[n];
   for(int i=0;i<n;++i){
       cin>>A[i];
   }
   
   sort(A,A+n);
   vector<long long>temp;
   for(int i=1;i<n;++i){
       long long zz=A[i]-A[i-1];
       if(zz>x)temp.push_back(zz);
   }
   
   sort(temp.begin(),temp.end());
 
   int d=0;
   int f=0;
   for(int i=0;i<temp.size();++i){
       if(f){
           d++;
       }
       else{
          long long c=temp[i]-1;
          c/=x;
         // cout<<temp[i]<<" "<<c<<" "<<k<<endl;
          if(c>k){
              f=1;
              d++;
          }
          else{
              k-=c;
          }
       }
      
   }
   d+=1;
   cout<<d<<endl;
}
