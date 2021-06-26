/*
Platform :- Codechef
Contest:- June Lunch time 2021
Problem :- False Number (FALSENUM)
Approach :- we can divide into two case 
           case 1:- starting character is '1'
                   in this case we traverse from 1 to n , n = length of string and as soon as we found a character that is not '0' we add '0'
           case 2:- starting character is not '1'
                   here we add '1' before current string
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     
     while(t--){
         string s;
         cin>>s;
         
         string ans="";
         if(s[0]=='1'){
             int f=0;
             ans+=s[0];
             for(int i=1;i<s.size();++i){
                 if(f)ans+=s[i];
                 else{
                 if(s[i]!='0'){
                     f=1;
                     ans+='0';
                     ans+=s[i];
                 }
                 }
             }
             
             if(f==0)ans+='0';
         }
         else{
             ans+='1';
             ans+=s;
         }
         cout<<ans<<endl;
     }
}
