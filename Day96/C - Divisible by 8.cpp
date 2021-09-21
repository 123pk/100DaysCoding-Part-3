/*
Platform :- Codeforces 
Contest :- Codeforces Round 306 Div 2
Approach :- We know for a number to be divisible by 8 its last 3 digits should be divisible by 8 , so we try to find all the any number from 0 to 999 which is divisible by 8
            and is subsequence of given string .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    
    
    int f=0;
    string ans="";
    
    //getting all the numbers which are divisible by 8 , upto 3 digits
    for(int i=0;i<=999;i+=8){
        string temp = to_string(i);
        int k=0;
        
        //looking for the subsequence 'i' in string 
        for(int j=0;j<=s.size();++j){
           if(s[j]==temp[k]){
               k++;
           }
        }
       
        if(k-1==temp.size()){
            f=1;
            ans=temp;
            break;
        }
    }
    
    if(f==0)cout<<"NO\n";
    else cout<<"YES\n"<<ans<<"\n";
}
