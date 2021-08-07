/*
Platform :- Codedrills
Contest :- ICPC Prelims Amritapuri 2020
Approach :- remove all the '?' from string and if in new string there is 'MP' then print "YES" else "NO"
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        
        char ch='*';
        int f=0;
        string z="";
        for(int i=0;i<s.size();++i){
            if(s[i]!='?'){
                 z+=s[i];
                
            }
             
        }
        
        for(int i=1;i<z.size();++i){
            if(z[i]=='U' && z[i-1]=='M'){
               f=1;
               break;
            }
        }
        
        if(f)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
