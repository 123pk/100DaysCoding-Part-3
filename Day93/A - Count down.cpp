/*
Platform :- Codeforces 
Contest :- Codeforces Round 743 Div 2
Approach :- Basic approach is to take all the non zero elements to the digit position and make them zero by decrementing them by '1' in one operation , which is equal to the sum
            of all digits and total  number of indexes which contain non zero digit .  We don't count the digit index .
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
        
        int ans=0;
        
        for(int i=0;i<s.size();++i){
            if(i==(s.size()-1)){
                ans+=(s[i]-'0');
            }
            else{
                ans+=(s[i]-'0');
                if((s[i]-'0'))ans++;
            }
        }
        
        cout<<ans<<"\n";
    }
}
