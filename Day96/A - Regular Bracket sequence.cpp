/*
Platform :- Codeforces
Contest :- Educational Round 114
Approach :- Start with ((())) and then (())() and then ()()() , we print the pattern in following pattern
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int x = n;
        for(int i=n;i>=1;--i){
            for(int j=1;j<=i;++j)cout<<"(";
            for(int j=1;j<=i;++j)cout<<")";
            
            int temp = x-i;
            for(int j=1;j<=temp;++j){
                cout<<"()";
            }
            cout<<"\n";
        }
        
    }
}
