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
         int n;
         cin>>n;
         
         long long A[n];
         long long B[n];
         int z=0;
         string end="";
         long long mv=0;
         for(int i=0;i<n;++i){
             cin>>A[i];
             
             string temp=bitset<32>(A[i]).to_string();
             int c=0;
             reverse(temp.begin(),temp.end());
             
             for(int j=0;j<32;++j){
                 if(temp[j]=='1')c=j;
             }
             z=max(z,c);
             
             if(i==0){
                 B[i]=0;
                 mv=A[i];
                 end=temp;
             }
             else{
                 
                     long long x=0;
                   for(int j=0;j<32;++j){
                       if(temp[j]!=end[j]){
                           end[j]='1';
                           x+=pow(2,j);
                       }
                       else{
                           if(temp[j]=='1')x+=pow(2,j);
                       }
                   }
                   
                   B[i]=x-A[i];
                   mv=x;
                   //end=x;
             }
         }
         
         
         
         for(auto &x:B)cout<<x<<" ";
         cout<<"\n";
    }
}
