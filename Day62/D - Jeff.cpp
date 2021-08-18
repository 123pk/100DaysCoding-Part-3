/*
Platform :- Codedrills 
Contest :- ICPC Gwalior Pune Regionals 
Approach :- we calculate the minimum time required by jay to reach the 'n'th index and if this value is >=n then Jeff will eat Jay else not
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,start;
        cin>>n>>start;
       // start--;
        
        string s;
        cin>>s;
        
        int i=0;
        int time=0;
        while(start<n){
            if(s[start]=='.'){
                time++;
                start++;
            }
            else {
                time+=2;
                start++;
            }
        }
        
        if(time>=n)cout<<"JEFF\n";
        else cout<<"JAY\n";
    }
}
