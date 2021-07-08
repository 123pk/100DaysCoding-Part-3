/*
Platform :- Codeforces
Contest :- Codeforces Round 730 #Div 2
Problem :- RPD and RAP sheet
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int c;
        int start=0;
        
        for(int i=0;i<n;++i){
            cout<<(i ^ start)<<endl;
            cin>>c;
            cout.flush();
            if(c)break;
            start^=(i^start);
        }
    }
}
