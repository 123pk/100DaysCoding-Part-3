/*
Platform :- Codeforces 
Contest :- Codeforces Round 736 Div 2
Approach :- itterate thorugh Gregor pawn and if it is '1' and enemy pawn is '0' for current index then we can directly use it , increment your count
           --> if current Gregor pawn is '1'  and if (i-1) pawn of enemy is '1' we choose that pawn else we check if (i+1) enemy pawn is '1' then we mark that pawn as
           used so that we cannot use that pawn again and increment our count.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s,p;
        cin>>s>>p;
        
        int ans=0;
        for(int i=0;i<n;++i){
            if(p[i]=='1'){
                if(s[i]=='0'){
                    ans++;
                }
                else{
                    if((i==0)){
                        if(s[i+1]=='1'){
                            s[i+1]='&';
                            ans++;
                        }
                    }
                    else if(i==n-1){
                        
                        if(s[i-1]=='1'){
                            ans++;
                            s[i-1]='&';
                        }
                    }
                    else{
                        if(s[i+1]=='1' || s[i-1]=='1'){
                            if(s[i-1]=='1'){
                                s[i-1]='&';
                                ans++;
                            }
                            else{
                                s[i+1]='&';
                                ans++;
                            }
                        }
                    }
                }
            }
        }
        
        cout<<ans<<"\n";
    }
}
