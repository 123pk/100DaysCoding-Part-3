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
        string s;
        cin>>s;
        
        int f=0;
        
        int start=-1,end=-1;
        int d=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='a'){
                start=i;
                d++;
                end=i;break;
            }
        }
        
        if(start==-1){
            cout<<"NO\n";
            continue;
        }
        
         
        start--;
        end++;
        char ch='b';
        while(d<s.size()){
            int g=0;
            if(start>=0){
                if(s[start]==ch){
                    g=1;
                    d++;
                    start--;
                }
            }
            if(g){
                ch++;
                continue;
            }
            
            if(end<s.size()){
                if(s[end]==ch){
                    end++;
                    d++;
                    g=1;
                }
            }
            if(g){
                ch++;
                continue;
            }
            else{
                f=1;break;
            }
        }
        
        if(f==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
