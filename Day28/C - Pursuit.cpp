/*
Platform :- Codeforces
Contest :- Codeforces Round #733 (Div. 1 + Div. 2, based on VK Cup 2021 - Elimination (Engine))
Approach :- to increase you value you add 100 to your performance and 0 to Illya's .we do so till the time score of (sz-(sz/4)) values of yours < illya's
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
       int n;
       cin>>n;
       
       vector<int> A(101),B(101);
       int tot1=0,tot2=0;
       for(int i=0;i<n;++i){
           int x;
           cin>>x;
           A[x]++;
       }
       for(int i=0;i<n;++i){
           int x;
           cin>>x;
           B[x]++;
       }
       
       
       
       int x=n-(n/4);
       int d=x;
       for(int i=100;i>=0;--i){
           if(A[i]){
              if(d>A[i]){
                  tot1+=(i*A[i]);
                  d-=A[i];
              }
              else{
                  tot1+=d*i;
                  d=0;
                  break;
              }
           }
       }
       
       d=x;
       for(int i=100;i>=0;--i){
           if(B[i]){
              if(d>B[i]){
                  tot2+=(i*B[i]);
                  d-=B[i];
              }
              else{
                  tot2+=d*i;
                  d=0;
                  break;
              }
           }
       }
       
       long long ans=0;
       long long z=tot2-tot1;
       
       if(z<0){
           ans=0;
       }
       else{
          int sz=n;
          
          while(tot1<tot2){
              sz++;
              x=sz-(sz/4);
              //values of kth - k/4
              A[100]++;
              B[0]++;
              ans++;
              d=x;
               tot1=0,tot2=0;
              for(int i=100;i>=0;--i){
           if(A[i]){
              if(d>A[i]){
                  tot1+=(i*A[i]);
                  d-=A[i];
              }
              else{
                  tot1+=d*i;
                  d=0;
                  break;
              }
           }
           
       }
       
       d=x;
       for(int i=100;i>=0;--i){
           if(B[i]){
              if(d>B[i]){
                  tot2+=(i*B[i]);
                  d-=B[i];
              }
              else{
                  tot2+=d*i;
                  d=0;
                  break;
              }
           }
       }
       
          }
       }
       cout<<ans<<"\n";
       
    }
    
}
