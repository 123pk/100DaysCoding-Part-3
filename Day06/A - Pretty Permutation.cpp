/*
Platform :- Codeforces 
Contest :- Codeforces Round 728 Div 2
Problem :- A - Pretty Permutations 
Approach :- if n is even we can do adjacenet swap to every 2nd element to for [2,1,4,3] from [1,2,3,4] in case of odd value of n we need an extra swap 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        if(n%2){
            cout<<3<<" "<<1<<" "<<2<<" ";
            for(int i=5;i<=n;i+=2){
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=2;i<=n;i+=2){
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<endl;
        }
    }
}
