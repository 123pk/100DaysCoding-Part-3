/*
Platform :- Codeforces
Contest :- Codeforces Round 668 Div 2
Approach :- we need to observe that all the non overlapping substring of lenth 'k' should be equal or ' ch[i%k] ' where ch[i] is character at ith index should be same for all
            such values else we cannot find any such string , now for substring of lenth 'k' if no of '0' is greater than (k/2) or no of '1' is greater then also string can never
            be created else it is always possible
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> ch(k,-1);
        string s;
        cin>>s;
        
        int f=0;
        for(int i=0;i<n;++i){
            if(s[i]=='?')continue;
            int x=s[i]-'0';
            if(ch[i%k]==-1){
                ch[i%k]=x;
            }
            
            if(ch[i%k]!=x){
                f=1;break;
            }
        }
        
        if(f)cout<<"NO\n";
        else{
            int c=0,d=0;
            for(int i=0;i<k;++i){
                  if(ch[i%k]==0)c++;
                  else if(ch[i%k]==1)d++;
                
            }
            if((c>(k/2)))cout<<"NO\n";
            else if((d)>(k/2))cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}
