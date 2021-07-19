/*
Platform :- Codeforces
Contest :- Codeforces Round 603 Div 3
Approach :- we will try to find all substring which can be typed and are not overlapping , then if size of substring is 'n' the number of of substring that
            can be typed is (n*(n+1))/2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    string s;
    cin>>s;
    
    vector<int>P(26);
    for(int i=0;i<k;++i){
        char ch;
        cin>>ch;
        P[ch-'a']++;
    }
    
    long long ans=0;
    long long c=0;
    for(int i=0;i<s.size();++i){
        if(P[s[i]-'a']){
            c++;
            if(i==n-1)ans+=(c*(c+1))/2;
        }
        else{
            ans+=(c*(c+1))/2;
            c=0;
        }
    }
    
    cout<<ans<<"\n";
}
