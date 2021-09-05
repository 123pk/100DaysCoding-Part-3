/*
Platform :- Codeforces
Contest :- Codeforces Round 742 Div 2
Approach :- if there is any 'U' or 'D' tile then conver it into 'D' and 'U' respectively in our string
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
        
        for(int i=0;i<n;++i){
            if(s[i]=='U')s[i]='D';
            else if(s[i]=='D')s[i]='U';
        }
        cout<<s<<"\n";
    }
}
