/*
Platform :- Codeforces
Contest :- Codeforces Round 738 Div 2
Approach :- traverse through string if you found a '?' check to it's nearest value !='?' and change this value accordingly
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
         int n;
         cin>>n;
         
         string s;
         cin>>s;
         
         if(count(s.begin(),s.end(),'?')==n){
             
             for(int i=0;i<n;++i){
                 if(i%2)cout<<"R";
                 else cout<<"B";
             }
             cout<<"\n";
             continue;
         }
         
         int f=0;
         int last=0;
         for(int i=0;i<s.size();++i){
             if(s[i]!='?'){
                 last=i;
               //  cout<<last<<" ";
                 char ch;
                 if(s[i]=='B')ch='R';
                 else ch='B';
                 for(int j=i-1;j>=0;--j){
                     if(s[j]=='?'){
                         s[j]=ch;
                         if(ch=='B')ch='R';
                         else ch='B';
                     }
                     else break;
                 }
             }
             else{
                 if(i==n-1){
                     char ch;
                     if(s[last]=='B')ch='R';
                     else ch='B';
                     
                     for(int j=last+1;j<n;++j){
                         s[j]=ch;
                         if(ch=='R')ch='B';
                         else ch='R';
                     }
                 }
             }
         }
        cout<<s<<"\n";
    }
}
