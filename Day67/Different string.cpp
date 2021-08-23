/*
Platform :- Codechef
Contest :- Codechef August Cook off 2021
Approach :- As there are 'n' string and all string are of length 'n' , we can exploit this constraint we can have a string ans which stores the 'ith' value opposite of 'ith' character
           of string 'i'. For example let n=4, i = 3 , ith string  = "1010" ,here ith(3rd) character is '1' so we will add '0' to our answer ( opposite ) of ith character. 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string ans="";
        for(int i=0;i<n;++i){
            string s;
            cin>>s;
            
            if(s[i]=='0')ans+='1';
            else ans+='0';
        }
        cout<<ans<<"\n";
    }
}
