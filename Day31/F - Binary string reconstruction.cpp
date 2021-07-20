/*
Platform :- Codeforces
Contest :- Codeforces Round 640 Div 4
Approach :- Greedily first construct string with patter '00' then add pattern for '11' and at the end of '01' or'10'
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        string ans="";
        
        if(a){
            for(int i=0;i<=a;++i)ans+='0';
        }
         
         if(b){
             if(c){
                 if(a)b--;
                 for(int i=0;i<=c;++i)ans+='1';
                 
                 int z=0;
                 while(z<b){
                     if(z%2==0)ans+='0';
                     else ans+='1';
                     z++;
                 }
             }
             else{
                 
                 if(a==0){
                     for(int i=0;i<=b;++i){
                         if(i%2)ans+='1';
                         else ans+='0';
                     }
                     
                 }
                 else{
                 int z=0;
                 while(z<b){
                     if(z%2==0)ans+='1';
                     else ans+='0';
                     z++;
                 }
                 }
             }
         }
         else{
             if(c){
                 for(int i=0;i<=c;++i)ans+='1';
             }
         }
        cout<<ans<<"\n";
    }
}
