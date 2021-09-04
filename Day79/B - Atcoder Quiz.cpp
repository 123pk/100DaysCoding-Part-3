/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 217
Approach :- Bruteforce
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string>temp;
    temp.insert("ABC");
    temp.insert("ARC");
    temp.insert("AGC");
    temp.insert("AHC");
    
    string a,b,c;
    cin>>a>>b>>c;
    
    temp.erase(a);
    temp.erase(b);
    temp.erase(c);
    for(auto x:temp)cout<<x<<endl;
}
