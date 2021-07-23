/*
Platform :- Codeforces
Contest :- Codeforces Round 734 Div 3
Approach :- n/3 is distributed to both 1 and 2 , if n%3 we increment first if n%3==1 and second if n%3==2
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        
        long long c1=0,c2=0;
        c1+=a/3;
        c2+=a/3;
        if(a%3==1)c1++;
        else if(a%3==2)c2++;
        cout<<c1<<" "<<c2<<"\n";
    }
}
