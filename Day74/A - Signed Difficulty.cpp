/*
Platform :- Atcoder
Contest :- Atcoder Beginner Contest 216
Approach :- Bruteforce all the given conditions , you can use string and last character will be value after point
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string temp;
    int f=0;
    char ch;
    for(int i=0;i<s.size();++i){
        if(f){
            ch=s[i];
        }
        else{
            if(s[i]=='.')f=1;
            else temp+=s[i];
        }
    }
    
    if('0'<=ch && ch<='2')cout<<temp<<"-\n";
    else if('3'<=ch && ch<='6')cout<<temp<<"\n";
    else cout<<temp<<"+\n";
}
