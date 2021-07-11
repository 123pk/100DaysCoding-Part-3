/*
Platform :- Codeforces
Contest :- Codeforces Round #731 Div 3
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int k,n,m;
         cin>>k>>n>>m;
         
         int A[n],B[m];
         for(int i=0;i<n;++i){
             cin>>A[i];
         }
         
         for(int i=0;i<m;++i){
             cin>>B[i];
         }
         
         vector<int>ans;
         int s1=0,s2=0;
         int f=0;
         while(1){
             if(s1==n && s2==m)break;
             
             if(s1==n){
                 if(B[s2]>k){
                     f=1;break;
                 }
                 ans.push_back(B[s2]);
                 if(B[s2]==0)k++;
                 s2++;
             }
             else if(s2==m){
                 if(A[s1]>k){
                     f=1;break;
                 }
                 ans.push_back(A[s1]);
                 if(A[s1]==0)k++;
                 s1++;
             }
             else{
                 
                 if(A[s1]==0){
                     ans.push_back(0);
                     s1++;
                     k++;
                     continue;
                 }
                 
                 if(B[s2]==0){
                     ans.push_back(0);
                     s2++;
                     k++;
                     continue;
                 }
                 
                 if(A[s1]>B[s2]){
                     if(B[s2]>k){
                         f=1;
                         break;
                     }
                     ans.push_back(B[s2]);
                     s2++;
                 }
                 else{
                     if(A[s1]>k){
                         f=1;break;
                     }
                     ans.push_back(A[s1]);
                     s1++;
                 }
             }
         }
         
         if(f){
             cout<<"-1\n";
             continue;
         }
         for(auto x:ans)cout<<x<<" ";
         cout<<"\n";
    }
}
