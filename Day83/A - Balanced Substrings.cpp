/*
Platform :- Codeforces
Contest :- Codeforces Educaional Round 113 Div 2
Approach :- Find substring "ab" or "ba" in string if not present print -1 else print the start index and end index of this substring
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int l=-1,r=-1;
        
        string s;
        cin>>s;
        
        int f=0;
        for(int i=0;i<n;++i){
            //check left
            int c=0,d=0;
            for(int j=i;j>=0;--j){
                if(s[j]=='a')c++;
                else d++;
                
                if(c==d){
                    l=j+1;
                    r=i+1;
                    f=1;
                    break;
                }
            }
            if(f)break;
            //check right
             c=0,d=0;
             
             for(int j=i;j<n;++j){
                 if(s[j]=='a')c++;
                 else d++;
                 if(c==d){
                     l=i+1;
                     r=j+1;
                     f=1;
                     break;
                 }
             }
             
             if(f)break;
        }
        
        cout<<l<<" "<<r<<"\n";
    }
}
