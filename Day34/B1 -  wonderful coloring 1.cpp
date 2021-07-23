/*
Platform :- Codeforces 
Contest :- Codeforces Round 734 Div 3
Problem :- B1 - wonderful coloring
Approach :- if frequenecy of the character in string is >=2 we can color one of this character to 'R' and one to 'G' and out of all other characters of frequny 1 let the sum
            count be 'c' then we can color 'c/2' additional ones 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int n=s.size();
        map<char,int>P;
        int d=0;
        for(auto &x:s)P[x]++;
        int c=0;
        for(auto &x:P){
            if(x.second>1)d++;
            else c++;
        }
        
        int ans=(d+(c/2));
        cout<<ans<<"\n";
    }
}
